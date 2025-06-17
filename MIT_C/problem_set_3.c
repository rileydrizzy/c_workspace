#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int n)
{
    int i = 2, ret = 1;
    while (i <= n)
    {
        // printf("%d\n", i);
        ret *= i;
        i++;
    }
    return ret;
}

double rand_double()
{
    /*generate random number in [0,1]*/
    double ret = (double)rand();
    return ret / (RAND_MAX + 1.0);
}

int sample_geometric_rv(double p)
{
    double q;
    int n = 0, condition_flag = 1;
    while (condition_flag)
    {
        q = rand_double();
        n++;
        condition_flag = q >= p;
    }
    return n;
}

int main(void)
{
    srand((unsigned)time(NULL)); // seed random
    int ans = factorial(10);
    printf("%d\n", ans);
    puts("-----");
    int sample = sample_geometric_rv(0.3);
    printf("Sampled geometric RV: %d\n", sample);
    return EXIT_SUCCESS;
}