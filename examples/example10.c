#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char country[] = "Moldavia";
    char match = 'a';

    // 2 times
    printf("how many times is %c in %s?: %d\n", match, country, matches(match, country));

    return 0;
}