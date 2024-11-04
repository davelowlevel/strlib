#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char animal[] = "Eagle";

    printf("Original: %s\n", animal);
    printf("Modified: %s\n", replace('c', 2, animal));

    return 0;
}