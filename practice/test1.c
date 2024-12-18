#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 1;
    int *num_p = 2;
    *num_p = *num_p + 1;
    printf("%d \n", num);
    return EXIT_SUCCESS;
}
