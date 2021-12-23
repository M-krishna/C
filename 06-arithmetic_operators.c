#include<stdio.h>

int main() {
	// arithmetic operators
	
	// Binary Operators(having 2 operands)
	// + (addition)
	// - (subtraction)
	// * (multiplication)
	// / (division)
	// % (modulo)


	int x = 5;
	int y = 2;

	printf("x + y = %d\n", x+y);
	printf("x - y = %d\n", x-y);
	printf("x * y = %d\n", x*y);
	printf("x / y = %f\n", x / (float) y);
	printf("x %% y = %d\n", x % y);
	
	// unary operators
	// ++ (increment)
	// -- (decrement)
	
	int z = 10;
	z++;
	printf("z=10, then z++ is %d\n", z);
	z--;
	printf("z=11, then z-- is %d\n", z);
}
