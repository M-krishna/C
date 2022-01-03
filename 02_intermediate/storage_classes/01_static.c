#include<stdio.h>

void with_static_variable();
void without_static_variable();

// 

int main() {	
	without_static_variable(); // should print 1
	without_static_variable(); // should print 1
	without_static_variable(); // should print 1

	printf("**********************\n");

	with_static_variable(); // should print 1
	with_static_variable(); // should print 2
	with_static_variable(); // should print 3
}



void without_static_variable() {
	int count = 0;
	count++;
	printf("Without static variable\n");
	printf("count: %d\n", count);
}

void with_static_variable() {
	static int count = 0;
	count++;
	printf("With static variable\n");
	printf("count: %d\n", count);
}
