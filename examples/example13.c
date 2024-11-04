#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char animal[] = "Buffalo";

    printf("Original: %s\n", animal);
    printf("Modified: %s\n", replace_char('c', 'f', animal));

    return 0;
}