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

void problem_2_ans(void)
{
    char lower_case = 'c';
    char upper_case = 'C';
    char nums = '1';
    char unknown_char_element = '\n';
    test_char(lower_case);
    test_char(upper_case);
    test_char(nums);
    test_char(unknown_char_element);
}

void problem_3_ans(void)
{

    int val = 0xCAFE;
    int bits = val & 0xFF;
    if (bits == 0x7 || bits == 0xB || (bits >= 0xD))
        puts("The last three of the last bits are on");
    // reverse the byts order -  0xFECA
    puts("------------");
    int ans = ((val & 0xFF) << 8) | (val >> 8);
    printf("0x%x \n", ans);
    puts("------------");
    ans = ((val & 0xF) << 12) | (val >> 4);
    printf("0x%x \n", ans);
}

void problem_4_ans(void)
{
    int x, MASK, y, z, c;
    x = 0xFF33, MASK = 0xFF00;
    c = (x & MASK) == 0;
    printf("0x%x \n", c);
    puts("------------");
    x = 10, y = 2, z = 2;
    z = y = (x++) + ((++y) * 2);
    printf("%d\n", z);
    puts("------------");
    x = 10, y = 4, z = 1;
    y >>= x & 0x2 && z;
    printf("0x%x\n", y);
}

int main(void)
{
    problem_2_ans();
    puts("------------");
    problem_3_ans();
    puts("------------");
    problem_4_ans();
    return 0;
}