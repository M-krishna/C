#include<stdio.h>

int main() {
	register int a = 100; // this might get stored in CPU register instead of RAM
	
	printf("Value of register int a is %d\n", a);
	// since this is stored in register, we can't able to use unar operator '&' on that variable
	// because it doesn't have memory address
	
	// printf("%d\n", &a); // throws an error
}
