#include<stdio.h>

void auto_storage_class();

// auto storage class is the default storage class for all the local variables

int main() {
	auto_storage_class();
}

void auto_storage_class() {
	int month;
	auto int count;
	
	printf("default value of int month: %ld\n", sizeof(month));
	printf("default value of auto int count: %ld\n", sizeof(count));

	month = 0;
	count = 1;
	printf("month: %d\n", month);
	printf("count: %d\n", count);
}

