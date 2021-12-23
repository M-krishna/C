#include<stdio.h>

int main() {
	// augumented assignment operator - used to replace a statement where a operator takes a variable
	// 				    as one of its arguments and then assigns the result back to the same variable
	// 			 	    x = x + 1
	// 				    x += 1

	int x = 10;
	printf("x = %d\n", x);
	x = x + 1;
	printf("x = x + 1 results:  %d\n", x);
	printf("x += 1 results: %d\n", x += 1);
	
	int y = 20;
	printf("y = %d\n", y);
	y = y - 1;
	printf("y = y - 1 results: %d\n", y);
	printf("y -= 1 results: %d\n", y -= 1);


	int z = 30;
	printf("z = %d\n", z);
	z = z * 2;
	printf("z = z * 2 results: %d\n", z);
	printf("z *= 2 resutls: %d\n", z *= 2);

	double i = 40;
	printf("i = %d\n", 40);
	i = i / (double) 2;
	printf("i = i / 2 results: %lf\n", i);
	printf("i /= 2 results: %lf\n", i /= (double)2);
	
	int j = 60;
	printf("j = %d\n", j);
	j = j % 2;
	printf("j = j %% 2 results: %d\n", j);
	printf("j %%= 2 results: %d\n", j %= 2);
}
