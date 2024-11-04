#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char name[] = "NIKOLAI ivuShKIn"; // Capitalize => Nikolai Ibushkin

    printf("Capitalize: %s\n", capitalize(name));
    
    return 0;
}