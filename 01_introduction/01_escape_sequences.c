#include<stdio.h>

// some escape sequences

int main() {
	printf("Hey there!\n"); // \n is for new line
	printf("Hello\t there!\t\n"); // \t is tab space
	// if we want to include double quotes inside print statement
	printf("\"This is a quote\" - someone\n");
	// include single quote inside print statement
	printf("\'This is a quote\'\n");
	// carriage return - moves the active position to the initial position of the current line
	printf("Hello \r friends");
}
