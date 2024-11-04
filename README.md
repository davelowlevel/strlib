
# strlib

**strlib** is a C library for basic string manipulation, developed by David Martinez in 2024. The library provides essential functions for working with strings, including length calculation, case conversion, character replacement, and substring searching. It is distributed under the GNU General Public License v3.

## Features

- Calculate the length of a string
- Convert strings to uppercase, lowercase, or capitalize them
- Check if a string is empty, starts with, or ends with a specific substring
- Find, replace, and manipulate characters or substrings within a string
- Get the first or last character of a string
- Locate the index of a specific character in a string

## Installation

Clone this repository and compile the library with your project. Make sure to include `strlib.h` in your code:

```bash
# Example compile command
gcc -o your_program your_code.c src/strlib.c
```

## Usage

Include the header in your source code:

```c
#include "strlib.h"
```

### Function Descriptions

#### `int length(char string[])`
Returns the length of the string up to 1024 characters.

#### `int is_empty(char string[])`
Returns `1` if the string is empty; otherwise returns `0`.

#### `char get_fchar(char string[])`
Returns the first character of the string.

#### `char get_lchar(char string[])`
Returns the last character of the string.

#### `char* to_upper(char string[])`
Converts all characters in the string to uppercase. Returns a new string.

#### `char* to_lower(char string[])`
Converts all characters in the string to lowercase. Returns a new string.

#### `char* capitalize(char string[])`
Capitalizes the first character of each word in the string. Returns a new string.

#### `int starts_with(char string[], char starts_w[])`
Returns `1` if `string` starts with `starts_w`; otherwise returns `0`.

#### `int ends_with(char string[], char ends_w[])`
Returns `1` if `string` ends with `ends_w`; otherwise returns `0`.

#### `int find_char(char string[], char to_find)`
Checks if `to_find` exists within `string`. Returns `1` if found, `0` otherwise.

#### `int matches(char to_match, char string[])`
Counts occurrences of `to_match` within `string`. Returns the count.

#### `char* replace(char replacement, int position, char string[])`
Replaces the character at `position` with `replacement` in `string`. Modifies the original string.

#### `char* replace_char(char replacement, char to_replace, char string[])`
Replaces all occurrences of `to_replace` with `replacement` in `string`. Returns a new string.

#### `char* replace_word(char replacement_word[], char to_replace[], char string[])`
Replaces occurrences of `to_replace` with `replacement_word` within `string`. Returns a new string.

#### `int get_index_of(char index_of, char string[])`
Finds the index of `index_of` in `string`. Returns the index, or `-1` if not found.

## License

strlib is distributed under the GNU General Public License v3. See the `LICENSE.TXT` file for more details.

## Author

David Martinez, 2024