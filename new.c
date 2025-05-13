#include <stdlib.h>
#include <stdio.h>

// inline comnets

/*Doc comnets

span long pages

*/

int test_if()
{
    char name[5] = "ladi";
    int x = 7;
    if (x % 2 == 0)
    {
        printf("%s \n", name);
    }
    else
    {
        puts("Error");
    }

    return EXIT_SUCCESS;
}

int test_switch(char ch_)
{
    switch (ch_)
    {
    case 'C':
        puts("Ladi is cunt");
    case 'N':
        puts("Ladi is Nice");
        break;

    default:
        puts("Ladi is undefined");
        break;
    }

    return EXIT_SUCCESS;
}

int main()
{
    char my_input = 'C';
    test_switch(my_input);
    return EXIT_SUCCESS;
}