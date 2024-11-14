#include <stdio.h>
#include <stdlib.h>
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

int main()
{
    int number_1 = 22;
    int number2 = 44;
    printf("Before swap: Number_1 = %i and Number_2 = %i \n", number_1, number2);
    swap(&number_1, &number2);
    printf("After swap: Number_1 = %i and Number_2 = %i \n", number_1, number2);
    return EXIT_SUCCESS;
}