# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import end

interface Object
end

class Int
	fun output is intern
end

class A
	fun foo(i: Int)
	do
		i.output
		i.output
	end
	fun bar(i: Int)
	do
		0.output
	end
end

class B
	super A
	redef fun bar(i: Int)
	do
		i.output
		i.output
		i.output
	end
	fun this_is_a_dead_method
	do
		0.output
	end

	init
	do
		1.output
	end
end

var a = new A	# A simple construction
a = new B	# A complex construction
a.foo(2)	# A monormphic call
a.bar(3)	# A polymorphic call
