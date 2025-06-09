#include <stdio.h>
#include <stdlib.h>

#define squared(x) ((x) * (x))

int main(void)
{
    double my_ans;
    scanf("%lf", &my_ans);
    double ans = 18.0 / squared(2 + 1);
    if (ans == my_ans)
    {
        puts("That is correct\n");
    }
    else
    {
        printf("The correct answer is = %lf\n", ans);
    }

    return EXIT_SUCCESS;
}