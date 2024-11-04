#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char game[] = "call of duty"; // Uppercase => CALL OF DUTY

    printf("Uppercase: %s\n", to_upper(game));
    

    return 0;
}