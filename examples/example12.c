#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char quote[] = "My favorite band is Metallica";

    printf("Original: %s\n", quote);
    printf("Modified: %s\n", replace_word("Megadeth", "Metallica", quote));

    return 0;
}