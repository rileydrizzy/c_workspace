#include <stdlib.h>
#include <stdio.h>
#include "my_func.h"

void (*func_arr[])(void) = {func_1, func_2, func_3};

int main(int argc, char *argv[])
{
    int var = argv[0];
    func_arr[var]();
    return EXIT_SUCCESS;
}
