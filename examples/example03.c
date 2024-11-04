#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char name[] = "vladimir"; // first char => v
    
    printf("First character of name: %c\n", get_fchar(name));

    return 0;
}