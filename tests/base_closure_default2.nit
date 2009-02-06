# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

import kernel

class A
	meth foo
		with bar(i: Int) do
			#alt1# return
			#alt2# return 1
			#alt3# abort
			#alt4# continue
			#alt5# continue 20
			(i * 10).output
		end
	do
		1.output
		bar(2)
		#alt6#i.output
		3.output
	end
end

var a = new A
0.output
a.foo with j do j.output
0.output
a.foo
0.output
