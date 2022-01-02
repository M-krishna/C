#include<stdio.h>

extern int i; // using extern storage class for a variable
extern void new_function();
extern void print_count_variable();

int another_function(); // function prototype

int count;

int main() {
	printf("default value of extern int i: %d\n", i);
	new_function();

	i = 100; // change the default value of i
	printf("new value of i: %d\n", i);
	
	another_function();
	print_count_variable();
}

int another_function() {
	count = 11;
	return 1;
}
