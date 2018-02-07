/**
 *Author:Huixin Peng
 *Date:2/4/2018
 *Assignment2 Program1
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {
	int n;
	int r;
	int inr;
	int coll = 0;
	
	n = atof(argv[1]);
	
	//Set the input
	printf("Input n: %d\n", n);
	
	if (n <=0) {
		printf("Invalid input, not defined for non-positive integers\n");
		return 1;
	}
	
	//check even or odd, then print out the result
	if (n%2 == 0) {
		r = n/2;
		printf("%d / 2 = %d\n", n, r);
	} else {
		r = n*3+1;
		printf("3 * %d + 1 = %d\n", n, r);
	}
	
	coll++;
	
	//repeat until the result is 1
	while (r!=1) {
		if (r%2 == 0) {
		inr = r;
		r = r/2;
		printf("%d / 2 = %d\n", inr, r);
	} else {
		inr= r;
		r = r*3+1;
		printf("3 * %d + 1 = %d\n", inr, r);
	}
	
	coll++;
	}
	
	printf("==================\nCollatz Number for n = %d is %d\n", n, coll);
	
	return 0;
}