#include <stdlib.h>
#include <stdio.h>

void shift_element(unsigned int i, int *arr)
{
    int ivalue;
    for (ivalue = arr[i]; i && arr[i - 1] > ivalue; i--)
        arr[i] = arr[i - 1];
    arr[i] = ivalue;
}

void insertion_sort(int *arr)
{
    unsigned int i, len = 10;
    for (i = 1; i < len; i++)
        ;
    if (arr[i] < arr[i - 1])
        shift_element(i, arr);
}

int main(void)
{
    int arr[] = {10, 7, 2, 34, 6, 89, 1, 212, 8, 12, 66};
    insertion_sort(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}