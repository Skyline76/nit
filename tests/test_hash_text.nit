# This file is part of NIT ( http://www.nitlanguage.org ).
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

var x = "string__NativeString__to_s_with_length"

var y = "string" + "__" + "NativeString" + "__" + "to_s_with_length"

var z = new FlatBuffer.from("string")
z.append("__")
z.append("NativeString")
z.append("__")
z.append("to_s_with_length")

var a = ["string", "NativeString", "to_s_with_length"].join("__")

print x.hash == y.hash
print y.hash == z.hash
print z.hash == a.hash
print a.hash == x.hash

print x.substring(8,12).hash == y.substring(8,12).hash
print y.substring(8,12).hash == z.substring(8,12).hash
print z.substring(8,12).hash == a.substring(8,12).hash
print a.substring(8,12).hash == x.substring(8,12).hash

