#include <stdio.h>
#include <stdlib.h>


#define MSG1 "All your base are belong to us"
// #define squared(x) x*x

// #define squared(x) (x*x)
// #define squared(x) (x)*(x)
#define squared(x) ((x)*(x))



int problem_1_ans(void){
	double ans = 10.0 + (2.0 / ((3.0 - 2.0) * 2.0));
	printf("The answer for Problem 1 %lf \n", ans);
	return EXIT_SUCCESS;
}


void problem_2_ans(void){
	double ans = 18.0 / squared(2+1);
	printf("The answer for the Marco problem is %lf\n", ans);
}

void problem_3_ans(void){
	puts("Hello, 6.087 students");
}

int problem_4_ans(void){
	const char msg[] = MSG1;
	puts(msg);
	return 0;
}


int main(void){
	problem_1_ans();
	problem_2_ans();
	problem_3_ans();
	
}