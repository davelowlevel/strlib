#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char var[] = "Earth";
    char other_var[] = ""; // empty var

    printf("var is empty?: %s\n", is_empty(var) ? "true" : "false");
    printf("another_var is empty?: %s\n", is_empty(other_var) ? "true" : "false");

    return 0;
}