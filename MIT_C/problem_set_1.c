#include <stdio.h>
#include <stdlib.h>

#define squared(x) x*x


int problem_1_ans(void){
	double ans = 10.0 + (2.0 / ((3.0 - 2.0) * 2.0));
	printf("%lf \n", ans);
	return EXIT_SUCCESS;
}


int problem_2_ans(void){
	double ans = 18.0 / squared(2+1);
}

int main(void){
	problem_1_ans();
	
}