#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char animal[] = "axolotl";
    printf("Index of t in axolotl: %d\n", get_index_of('t', animal));

    return 0;
}