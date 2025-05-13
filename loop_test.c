#include <stdio.h>
#include <stdlib.h>

{
    int c = 0;
    {
        int x = 3;
    }
}

void test_for_loop(int *ptr)
{
    int i;
    for (i = 9; 0 <= i; i--)
    {
        printf("%d\n", ptr[i]);
    }
}

void test_while_loop(int *ptr, int len_array)
{
    while (len_array + 1 != 0)
    {
        printf("%d\n", ptr[len_array]);
        --len_array;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_len = 9;
    puts("Start Countdown now");
    test_for_loop(nums);
    test_while_loop(nums, array_len);

    return EXIT_SUCCESS;
}