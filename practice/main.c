#include <stdlib.h>
#include <stdio.h>
#include "example.h"

int main(int argc)
{
    if (argc == 2)
    {
        ladi_func();
    }
    else
    {
        printf("Hello World\n");
    }
    return EXIT_SUCCESS;
}
