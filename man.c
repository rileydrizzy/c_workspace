#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    if (strchr("ladi", "a"))
        puts("FOUND");
    else
        puts("NOT FOUND");
    return EXIT_SUCCESS;
}