#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char my_var[] = "chemistry"; // 9 characters
    int name_length = length(my_var);

    printf("Length of %s: %d\n", my_var, name_length);

    return 0;
}