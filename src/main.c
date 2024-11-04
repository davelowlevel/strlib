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

#include "../include/strlib.h"
#include <stdlib.h>

int length(char string[])
{   
    int size = 0;
    while (string[size] != '\0' && !(size > 0x400))
    {
        size++;
    }

    return size;
}

int is_empty(char string[])
{
    return length(string) < 1;
}

char get_fchar(char string[])
{
    return string[0];
}

char get_lchar(char string[])
{
    return string[length(string)-1];
}

char *to_upper(char string[])
{
    char *final_str = malloc(sizeof(char) * (length(string) + 1));

    for (int i = 0; i < length(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z') {
            final_str[i] = string[i] - 32;
        } else {
            final_str[i] = string[i];
        }

    }
    
    return final_str;
}

char *to_lower(char string[])
{
    char *final_str = malloc(sizeof(char) * (length(string) + 1));

    for (int i = 0; i < length(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z') {
                final_str[i] = string[i] + 32;
        } else {
            final_str[i] = string[i];
        }

    }
    
    return final_str;
}

char *capitalize(char string[])
{
    string = to_lower(string);
    char *final_str = malloc(sizeof(char) * (length(string) + 1));

    if (string[0] >= 'a' && string[0] <= 'z')
    {
        final_str[0] = string[0] - 32;
    }
    else
    {
        final_str[0] = string[0];
    }

    for (int i = 1; i < length(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            if (string[i-1] == ' ')
            {
                final_str[i] = string[i] - 32;
            }
            else {
                final_str[i] = string[i];
            }
            
        }
        else {
            final_str[i] = string[i];
        }
    }

    return final_str;
    
}

int starts_with(char string[], char starts_w[])
{
    if(length(starts_w) > length(string))
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < length(starts_w); i++)
        {
            if (starts_w[i] != string[i])
            {
                return 0;
            }
        }
        return 1;
    }
}

int ends_with(char string[], char ends_w[])
{
    if (length(ends_w) > length(string)) {
        return 0;
    }

    int start_index = length(string) - length(ends_w);
    
    for (int i = 0; i < length(ends_w); i++) {
        if (string[start_index + i] != ends_w[i]) {
            return 0;
        }
    }

    return 1;
}

int find_char(char string[], char to_find)
{
    for (int i = 0; i < length(string); i++)
    {
        if (string[i] == to_find)
        {
            return 1;
        }
    }
    return 0;
}

int matches(char to_match, char string[])
{
    int counter = 0;
    for (int i = 0; i < length(string); i++)
    {
        if (string[i] == to_match)
        {
            counter++;
        }
    }
    return counter;
}

char *replace(char replacement, int position, char string[])
{
    string[position] = replacement;

    return string;
}

char *replace_char(char replacement,char to_replace , char string[])
{
    char *final_str = malloc(sizeof(char) * (length(string) + 1));

    for (int i = 0; i < length(string); i++)
    {
        if (string[i] != to_replace)
        {
            final_str[i] = string[i];
        }
        else
        {
            final_str[i] = replacement;
        }
    }
    return final_str;
}

char *replace_word(char replacement_word[], char to_replace[], char string[])
{
    int str_length = length(string);
    int replacement_length = length(replacement_word);
    int to_replace_length = length(to_replace);

    char *replaced = malloc(sizeof(char) * (str_length + replacement_length + 1 ));
    int k = 0;

    for (int i = 0; i < str_length; i++)
    {
        int j;
        for (j = 0; j < to_replace_length; j++)
        {
            if (string[i + j] != to_replace[j])
            {
                break;
            }
        }

        if (j == to_replace_length)
        {
            for (int l = 0; l < replacement_length; l++) 
            {
                replaced[k++] = replacement_word[l];
            }
            i += to_replace_length - 1;
        }
        else
        {
            replaced[k++] = string[i];
        }
    }

    replaced[k] = '\0';
    return replaced;
}

int get_index_of(char index_of, char string[])
{
    for (int i = 0; i < length(string); i++)
    {
        if(string[i] == index_of)
        {
            return i;
        }
    }
    return -1;
}