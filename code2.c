#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    scanf("%4s", name);
    strcat(name, "2");
    fprintf(stdout, "%s\n", name);
    return EXIT_SUCCESS;
}
