#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <strings.h>

int main(void)
{
    printf("%i, %i\n", SCHAR_MAX, INT_MAX);
    signed char c;
    int i = INT_MAX;
    long K;
    printf("%c\n", c = i);
    K = (c = i);
    printf("%ld\n", K);
    printf("%c\n", c);
    return EXIT_SUCCESS;
}