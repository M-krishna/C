#include<stdio.h>

void printAge(int *pAge); // function prototype
void another_example();
void null_pointer_example();
void conditional_check_pointers();

int main() {
    // pointer = a variable like reference that holds the memory address to
    //           another variable.
    //           * = indirection operator (value at address)

    int age = 21;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);

    // now to store the address of a variable to another variable 
    // we can use pointers
    int *pAge = &age;

    // now what is pAge
    printf("\nAddress of pAge: %p\n", pAge); // displays the address

    // what should we do to display the value at address?
    printf("Value of pAge: %d\n", *pAge);

    // I'm curious about the size of age and pAge
    printf("\nSize of age: %lu bytes\n", sizeof(age)); // 4 bytes
    printf("Size of pAge: %lu bytes\n", sizeof(pAge)); // 8 bytes

    // so why sizeof(pAge) returns 8 bytes?
    // that's because 8 bytes is required to store hexadecimal address.

    // we can also pass pointer as arguments to functions
    printf("\nPassing pointer to a function\n");
    printf("******************************\n");
    printAge(pAge);

    another_example();
    null_pointer_example();
    conditional_check_pointers();
}

void printAge(int *pAge) {
    printf("My age is %d\n", *pAge);
}

void another_example() {
    int i = 10;
    int *ip;

    ip = &i;

    int *j = &i; // declaration and initialization on same line

    // &<variable> gives the address the variable
    // *<variable> = &<variable> stores the address of the variable

    printf("The address of the variable i: %p\n", &i);
    printf("The address of the variable i: %p\n", ip);
    printf("The value of the variable i: %d\n", *ip);
}

void null_pointer_example() {
    // it is a good practice to assign NULL value to pointer if we don't
    // have any address to assign

    int *ptr = NULL; // pointer to interger with NULL value
    printf("The value of ptr: %p\n", ptr); // prints 0x0, which means 0 in hex
}

void conditional_check_pointers() {
    int i = 10;
    int *ptr = &i; // change this to NULL to make it NULL pointer

    if(ptr) {
        printf("\nThis pointer is not null %d, %p\n", *ptr, ptr);
    } else {
        printf("\nThis is a NULL pointer\n");
    }
}