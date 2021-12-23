#include<stdio.h>

int main() {
	// variables are nothing but a space in memory to store something

	int a; // declaration
	a = 20; // initialization
	int b = 30; // declaration and initialization on the same line
	
	printf("a = %d, b = %d\n", a, b); // here %d is format specifier 'd' is for decimal

	int age = 24; // integer datatype
	float cgpa = 7.1; // floating point
	char grade = 'C'; // character, represented inside single quotes
	
	// C don't have strings. we can emulate strings using array of characters
	char name[] = "Krishna"; // inside double quotes
	
	printf("I\'m %d years old\n", age);
	printf("My cgpa is %f\n", cgpa); // f is for floating point
	printf("My grade is %c\n", grade); // c is for character
	printf("And I\'m %s\n", name); // s is for string(array of characters)
}
