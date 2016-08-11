# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Feedback related features
module api_feedback

import web_base
import mongodb

redef class NitwebConfig

	# MongoDB uri used for data persistence.
	#
	# * key: `mongo.uri`
	# * default: `mongodb://localhost:27017/`
	var mongo_uri: String is lazy do
		return value_or_default("mongo.uri", "mongodb://localhost:27017/")
	end

	# MongoDB DB used for data persistence.
	#
	# * key: `mongo.db`
	# * default: `nitweb`
	var mongo_db: String is lazy do return value_or_default("mongo.db", "nitweb")

	# Mongo instance
	var mongo: MongoClient is lazy do return new MongoClient(mongo_uri)

	# Database instance
	var db: MongoDb is lazy do return mongo.database(mongo_db)

	# MongoDB collection used to store stars.
	var stars: MongoCollection is lazy do return db.collection("stars")
end

# Group all api handlers in one router
class APIFeedbackRouter
	super APIRouter

	init do
		use("/stars/:id", new APIStars(config))
	end
end

# Stars attributed to mentities
class APIStars
	super APIHandler

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then
			res.error 404
			return
		end

		res.json mentity_ratings(mentity)
	end

	redef fun post(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then
			res.error 404
			return
		end
		var obj = req.body.parse_json
		if not obj isa JsonObject then
			res.error 400
			return
		end
		var rating = obj["rating"]
		if not rating isa Int then
			res.error 400
			return
		end

		var val = new MEntityRating(mentity.full_name, rating, get_time)
		config.stars.insert(val.json)

		res.json mentity_ratings(mentity)
	end

	# Get the ratings of a `mentity`
	fun mentity_ratings(mentity: MEntity): MEntityRatings do
		var ratings = new MEntityRatings(mentity)

		var req = new JsonObject
		req["mentity"] = mentity.full_name
		var rs = config.stars.find_all(req)
		for r in rs do ratings.ratings.add new MEntityRating.from_json(r)
		return ratings
	end
end

# Ratings representation for a mentity
class MEntityRatings
	super Jsonable

	# MEntity rated
	var mentity: MEntity

	# List of ratings
	var ratings = new Array[MEntityRating]

	# Mean of all ratings or 0
	fun mean: Float do
		if ratings.is_empty then return 0.0
		var sum = 0.0
		for r in ratings do sum += r.rating.to_f
		var res = sum / ratings.length.to_f
		return res
	end

	# Json representation of `self`
	fun json: JsonObject do
		var obj = new JsonObject
		obj["mentity"] = mentity.full_name
		obj["ratings"] = new JsonArray.from(ratings)
		obj["mean"] = mean
		return obj
	end

	redef fun to_json do return json.to_json
end

# Rating value of a MEntity
class MEntityRating
	super Jsonable

	# MEntity this rating is about
	var mentity: String

	# Rating value (between 1 and 5)
	var rating: Int

	# Timestamp of this rating
	var timestamp: Int

	# Init this rating value from a JsonObject
	init from_json(obj: JsonObject) do
		init(obj["mentity"].as(String), obj["rating"].as(Int), obj["timestamp"].as(Int))
	end

	# Translate this rating value to a JsonObject
	fun json: JsonObject do
		var obj = new JsonObject
		obj["mentity"] = mentity
		obj["rating"] = rating
		obj["timestamp"] = timestamp
		return obj
	end

	redef fun to_json do return json.to_json
end
