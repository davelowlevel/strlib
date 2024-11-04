#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char name[] = "Lyudmila"; // Last char => a
    
    printf("Last character of name: %c\n", get_lchar(name));

    return 0;
}