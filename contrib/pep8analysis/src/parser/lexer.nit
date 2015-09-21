# Lexer and its tokens.
# This file was generated by SableCC (http://www.sablecc.org/).
module lexer is no_warning("missing-doc", "old-init")

intrude import parser_nodes
private import tables

redef class Token
    var text_cache: nullable String

    redef fun text
    do
        var res = _text_cache
        if res != null then return res
        res = location.text
	_text_cache = res
	return res
    end

    fun parser_index: Int is abstract
end

redef class TEol
    redef fun parser_index: Int
    do
	return 0
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TNumber
    redef fun parser_index: Int
    do
	return 1
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TFloat
    redef fun parser_index: Int
    do
	return 2
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TChar
    redef fun parser_index: Int
    do
	return 3
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TString
    redef fun parser_index: Int
    do
	return 4
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class THex
    redef fun parser_index: Int
    do
	return 5
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TColon
    redef fun parser_index: Int
    do
	return 6
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TComma
    redef fun parser_index: Int
    do
	return 7
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TComment
    redef fun parser_index: Int
    do
	return 8
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkByte
    redef fun parser_index: Int
    do
	return 9
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkWord
    redef fun parser_index: Int
    do
	return 10
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkBlock
    redef fun parser_index: Int
    do
	return 11
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkAscii
    redef fun parser_index: Int
    do
	return 12
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkAddrss
    redef fun parser_index: Int
    do
	return 13
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkEquate
    redef fun parser_index: Int
    do
	return 14
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TTkBurn
    redef fun parser_index: Int
    do
	return 15
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TEndBlock
    redef fun parser_index: Int
    do
	return 16
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end

redef class TId
    redef fun parser_index: Int
    do
	return 17
    end

    init init_tk(loc: Location)
    do
		_location = loc
    end
end


redef class EOF
    redef fun parser_index: Int
    do
	return 18
    end

    init(loc: Location)
    do
        _text_cache = ""
		_location = loc
    end
end

redef class AError
    var message: String

    init init_error(message: String, loc: Location)
    do
		init(loc)
		self.message = message
    end
end


# The lexer extract NIT tokens from an input stream.
# It is better user with the Parser
class Lexer
	super TablesCapable
	# Last peeked token
	var token: nullable Token

	# Lexer current state
	var state: Int = 0

	# The source file
	var file: SourceFile

	# Current character in the stream
	var stream_pos: Int = 0

	# Current line number in the input stream
	var line: Int = 0

	# Current column in the input stream
	var pos: Int = 0

	# Was the last character a cariage-return?
	var cr: Bool = false

	# Constante state values
	private fun state_initial: Int do return 0 end

	# Create a new lexer for a stream (and a name)
	init(file: SourceFile)
	do
		_file = file
	end

	# Give the next token (but do not consume it)
	fun peek: Token
	do
		while _token == null do
			_token = get_token
		end
		return _token.as(not null)
	end

	# Give and consume the next token
	fun next: Token
	do
		var result = _token
		while result == null do
			result = get_token
		end
		_token = null
		return result
	end

	# Get a token, or null if it is discarded
	private fun get_token: nullable Token
	do
		var dfa_state = 0

		var sp = _stream_pos
		var start_stream_pos = sp
		var start_pos = _pos
		var start_line = _line
		var string = _file.string
		var string_len = string.length

		var accept_state = -1
		var accept_token = -1
		var accept_length = -1
		var accept_pos = -1
		var accept_line = -1

		loop
			if sp >= string_len then
				dfa_state = -1
			else
				var c = string[sp].code_point
				if c >= 255 then c = 255
				sp += 1

				var cr = _cr
				var line = _line
				var pos = _pos
				if c == 10 then
					if cr then
						cr = false
					        _file.line_starts[line] = sp
					else
						line = line + 1
						pos = 0
					        _file.line_starts[line] = sp
					end
				else if c == 13 then
					line = line + 1
					pos = 0
					cr = true
					_file.line_starts[line] = sp
				else
					pos = pos + 1
					cr = false
				end

				loop
					var old_state = dfa_state
					if dfa_state < -1 then
						old_state = -2 - dfa_state
					end

					dfa_state = -1

					var low = 0
					var high = lexer_goto(old_state, 0) - 1

					if high >= 0 then
						while low <= high do
							var middle = (low + high) / 2
							var offset = middle * 3 + 1 # +1 because length is at 0

							if c < lexer_goto(old_state, offset) then
								high = middle - 1
							else if c > lexer_goto(old_state, offset+1) then
								low = middle + 1
							else
								dfa_state = lexer_goto(old_state, offset+2)
								break
							end
						end
					end
					if dfa_state > -2 then break
				end

				_cr = cr
				_line = line
				_pos = pos
			end

			if dfa_state >= 0 then
				var tok = lexer_accept(dfa_state)
				if tok != -1 then
					accept_state = dfa_state
					accept_token = tok
					accept_length = sp - start_stream_pos
					accept_pos = _pos
					accept_line = _line
				end
			else
				if accept_state != -1 then
					var location = new Location(_file, start_line + 1, accept_line + 1, start_pos + 1, accept_pos)
					_pos = accept_pos
					_line = accept_line
					_stream_pos = start_stream_pos + accept_length
					if accept_token == 0 then
						return null
					end
					if accept_token == 1 then
						return new TEol.init_tk(location)
					end
					if accept_token == 2 then
						return new TNumber.init_tk(location)
					end
					if accept_token == 3 then
						return new TFloat.init_tk(location)
					end
					if accept_token == 4 then
						return new TChar.init_tk(location)
					end
					if accept_token == 5 then
						return new TString.init_tk(location)
					end
					if accept_token == 6 then
						return new THex.init_tk(location)
					end
					if accept_token == 7 then
						return new TColon.init_tk(location)
					end
					if accept_token == 8 then
						return new TComma.init_tk(location)
					end
					if accept_token == 9 then
						return new TComment.init_tk(location)
					end
					if accept_token == 10 then
						return new TTkByte.init_tk(location)
					end
					if accept_token == 11 then
						return new TTkWord.init_tk(location)
					end
					if accept_token == 12 then
						return new TTkBlock.init_tk(location)
					end
					if accept_token == 13 then
						return new TTkAscii.init_tk(location)
					end
					if accept_token == 14 then
						return new TTkAddrss.init_tk(location)
					end
					if accept_token == 15 then
						return new TTkEquate.init_tk(location)
					end
					if accept_token == 16 then
						return new TTkBurn.init_tk(location)
					end
					if accept_token == 17 then
						return new TEndBlock.init_tk(location)
					end
					if accept_token == 18 then
						return new TId.init_tk(location)
					end
				else
					_stream_pos = sp
					var location = new Location(_file, start_line + 1, start_line + 1, start_pos + 1, start_pos + 1)
					if sp > start_stream_pos then
						var text = string.substring(start_stream_pos, sp-start_stream_pos)
						var token = new AError.init_error("Syntax error: unknown token {text}.", location)
						return token
					else
						var token = new EOF(location)
						return token
					end
				end
			end
		end
	end
end

