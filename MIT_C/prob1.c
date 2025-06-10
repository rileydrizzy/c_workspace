#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
Without setting a of the variables a,b,c and n, and also using no optimization in the complier,
it took an average of about 6.5msec for the computation (Ten million times)to be completed.
By making the variable a,b,c a register variables, it took an average of about 6.45msec for the computation to be completed.
it was also observed that making the n, a register variable also, resulted to an average of about 6.4msec.

*/

#define NMAX 25
static unsigned int results_buffer[NMAX];

void fibonacci()
{
	/* here are the variables to set as registers */
	register unsigned int a = 0;
	register unsigned int b = 1;
	register unsigned int c;
	register int n;

	/* do not edit below this line */
	results_buffer[0] = a;
	results_buffer[1] = b;
	for (n = 2; n < NMAX; n++)
	{
		c = a + b;
		results_buffer[n] = c; /* store code in results buffer */
		a = b;
		b = c;
	}
}

int main(void)
{

	int n, ntests = 10000000;
	clock_t tstart, tend;
	double favg;

	/* do profiling */
	tstart = clock();

	for (n = 0; n < ntests; n++)
		fibonacci();

	tend = clock();
	/* end profiling */

	/* compute average execution time */
	favg = ((double)(tend - tstart)) / CLOCKS_PER_SEC / ntests;

	/* print avg execution time in milliseconds */
	printf("Avg. execution time: %g msec\n", favg * 1000);
	return 0;
}
