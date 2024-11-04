#include <stdio.h>
#include <stdlib.h>
#include "../include/strlib.h"

int main(void)
{
    char brand[] = "masserati";
    char swith[] = "maser";
    char ewith[] = "ati";

    printf("%s starts with %s?: %s\n", brand, swith, starts_with(brand, swith) ? "true" : "false"); // false
    printf("%s ends with %s?: %s\n", brand, ewith, ends_with(brand, ewith) ? "true" : "false"); // true

    return 0;
}