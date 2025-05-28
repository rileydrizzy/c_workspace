#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

    char arr[11];

    for (unsigned int i = 0; i < 10; ++i)
    {
        arr[i] = 'o' + i;
        printf("%c\n", arr[i]);
    }
    arr[10] = '\0';
    printf("%s\n", arr);
    return EXIT_SUCCESS;
}