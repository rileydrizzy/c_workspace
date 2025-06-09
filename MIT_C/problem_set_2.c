#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <limits.h>
#include <float.h>

void test_char(char val)
{
    if (val >= 'a' && val <= 'z')
    {
        puts("The char is a Lower case");
    }
    else if (val >= 'A' && val <= 'Z')
    {
        puts("This char is a Upper case");
    }
    else if (val >= '0' && val <= '9')
    {
        puts("This is a char digit");
    }
    else if (val == ' ' || val == '\n' || val == '\t')
    {
        puts("This is a special char");
    }
}

int main(void)
{
    char lower_case = 'c';
    char upper_case = 'C';
    char nums = '1';
    char unknown_char_element = '\n';
    test_char(lower_case);
    test_char(upper_case);
    test_char(nums);
    test_char(unknown_char_element);
    return EXIT_SUCCESS;
}