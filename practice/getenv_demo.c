#include <stdlib.h>
#include <stdio.h>

void main()
{
    char *shell = getenv("SHELL");
    printf("The Current shell is %s. \n", shell);
}