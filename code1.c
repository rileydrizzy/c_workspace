#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// lok into the new life

int main()
{
    char name[10];
    scanf("%4s", name);
    strcat(name, "cd");
    printf("%s\n", name);
    return EXIT_SUCCESS;
}
