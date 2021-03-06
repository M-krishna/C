#include<stdio.h>
#include<stdbool.h>

int main() {
	char a = 'K'; // single character %c
	char b[] = "Krishna"; // array of characters %s

	printf("Single character: %c\n", a);
	printf("Array of characters: %s\n", b);
	
	printf("\n");
	
	float c = 3.141592; // 4 bytes (32 bits) (2^32 - 1) can be stored %f
	double d = 3.1415922653589793; // 8 bytes (64 bits) (2^64 - 1) can be stored %lf

	printf("Floating point number: %f\n", c); // by default it'll display 6 decimal points
	printf("Floating point numbers with more than 6 decimal places: %0.15f\n", c);
	printf("Double datatype or long float: %lf\n", d);
	printf("Double datatype with more than 6 decimal places: %0.15lf\n", d);
	
	printf("\n");

	bool e = true;	// 1 byte(true or false) %d
	printf("Boolean datatype(true): %d\n", e);

	bool f = false;
	printf("Boolean datatype(false): %d\n", f);
	
	printf("\n");

	// char can also store decimal values
	char g = 100; // 1 byte(-128 to 127) %d or %c
	unsigned char h = 255; // 1 byte(0 to 255) %d or %c 

	printf("char datatype can also store decimal values\n");
	printf("char g = 100, display using %%d specifier: %d\n", g);
	printf("char g = 100, display using %%c specifier: %c\n", g);
	printf("unsigned char h = 255, display using %%d specifier: %d\n", h);
	printf("unsigned char h = 255, display using %%c specifier: %c\n", h);
	
	printf("\n");

	short int i = 32767; // 2 bytes(-32,768 to 32,767) %d, this can also be written as short i = 32767.
	unsigned short int j = 65535; // 2 bytes(0 to 65,535) %d, this can also be written as unsigned short j = 65535

	printf("short int i = %d\n", i);
	printf("unsigned short int j = %d\n", j);
	
	printf("\n");

	int k = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
	unsigned int l = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

	printf("int k = %d\n", k);
	printf("unsigned int l = %u\n", l);
	
	printf("\n");

	long long int m = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
	unsigned long long int n = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

	printf("long long int m = %lld\n", m);
	printf("unsigned long long int n = %llu\n", n);

}
