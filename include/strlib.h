/*
 * strlib - String manipulation library in C
 * Copyright (C) 2024 David Martinez
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STRLIB_H
#define STRLIB_H

int length(char string[]);
int is_empty(char string[]);
char get_fchar(char string[]);
char get_lchar(char string[]);
char *to_upper(char string[]);
char *to_lower(char string[]); 
char *capitalize(char string[]);
int starts_with(char string[], char starts_w[]);
int ends_with(char string[], char ends_w[]);
int find_char(char string[], char to_find);
int matches(char to_match, char string[]);
char *replace(char replacement, int position, char string[]);
char *replace_char(char replacement,char to_replace , char string[]);
char *replace_word(char replacement_word[], char to_replace[], char string[]);
int get_index_of(char index_of, char string[]);

#endif