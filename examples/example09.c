#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char country[] = "Russia";
    char to_find = 'x';

    // false
    printf("%c is in %s?: %s\n", to_find, country, find_char(country, to_find) ? "true" : "false");

    return 0;
}