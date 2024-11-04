#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char game[] = "SMASH BROS"; // Lowercase => smash bros

    printf("Lowercase: %s\n", to_lower(game));
    

    return 0;
}