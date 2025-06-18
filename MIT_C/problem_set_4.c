#include <stdlib.h>
#include <stdio.h>

int array_int[] = {10, 7, 2, 34, 6, 89, 1, 212, 8, 12, 66};

void shift_element(unsigned int i)
{
    int ivalue;
    for (ivalue = array_int[i]; i && array_int[i - 1] > ivalue; i--)
        array_int[i] = array_int[i - 1];
    array_int[i] = ivalue;
}

void insertion_sort(void)
{
    unsigned int i, len = 11;
    for (i = 1; i < len; i++)
    {
        if (array_int[i] < array_int[i - 1])
            shift_element(i);
    }
}

void print_out_arr()
{
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", array_int[i]);
    }
    printf("\n");
}

void shift_element_pointer(int *pElement)
{
    int value;
}

void insetion_sort_pointer(int *arr_pointer)
{
    int *arr_unsorted_start, arr_end_pointer = arr_pointer + 10;
    for (arr_unsorted_start = arr_pointer + 1; arr_unsorted_start < arr_end_pointer; arr_unsorted_start++)
    {
        if (*arr_unsorted_start < *(arr_unsorted_start - 1))
            shift_element_pointer(arr_unsorted_start);
    }
}

int main(void)
{
    // insertion_sort();
    insetion_sort_pointer(&array_int);
    print_out_arr();
    return EXIT_SUCCESS;
}
