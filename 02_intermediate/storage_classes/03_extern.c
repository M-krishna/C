#include<stdio.h>

int i=10;
extern int count;

void new_function() {
	printf("Printing from new function\n");
}

void print_count_variable() {
	printf("count: %d\n", count);
}

