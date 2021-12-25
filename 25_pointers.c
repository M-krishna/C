#include<stdio.h>

void printAge(int *age);

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
}

void printAge(int *pAge) {
    printf("My age is %d\n", *pAge);
}