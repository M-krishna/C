#include<stdio.h>

int main() {
    // memory = an array of bytes within RAM(street)
    // memory block = a single unit(block) within memory, used to hold some value
    // memory address = the address of where a memory block is located(house address)

    // we use '&' sign to get the memory address of the variable

    char a = 'X';
    printf("%lu bytes for char datatype\n", sizeof(a));

    int b = 23;
    printf("%lu bytes for int datatype\n", sizeof(b));

    double c = 'Z';
    printf("%lu bytes for double datatype\n", sizeof(c));

    // To get the address of the value we use '&' sign
    // use %p format specifier to display memory addresses
    printf("The memory address of variable a is %p\n", &a);
    printf("The memory address of variable b is %p\n", &b);
    printf("The memory address of variable c is %p\n", &c);

    // memory sizes for array
    char x;
    char y[2];

    printf("Memory bytes for char datatype %lu\n", sizeof(x));
    printf("Memory bytes for char[2] %lu\n", sizeof(y));
}