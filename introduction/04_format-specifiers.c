#include<stdio.h>

int main() {

	// format specifier % = defines and formats a type of data to be displayed
	
	// %c - character
	// %s - string
	// %f - float
	// %lf - double
	// %d - integer

	// %.1 = decimal precision
	// %1 = minimum field width
	// %- = left align

	float item1 = 5.75;
	float item2 = 3.00;
	float item3 = 100.99;

	printf("Item1: $%.1f\n", item1);
	printf("Item2: $%1f\n", item2);
	printf("Item3: $%-f\n", item3);
}
