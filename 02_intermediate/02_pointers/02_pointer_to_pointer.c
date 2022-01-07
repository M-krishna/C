#include<stdio.h>

// Pointer to pointer
// Pointer pointing to another pointing or chain of pointers

int main() {
    int i = 10;
    int *ptr = &i; // *ptr is pointer to an interger that holds the address of the variable i
    int **ptr1 = &ptr; // **ptr1 is pointer to a pointer of type int which holds the address of the pointer ptr
    int ***ptr2 = &ptr1; // ***ptr2 is a pointer to a pointer of type int which holds the address of the pointer ptr1

    printf("Address of the variable i: %p\n", ptr);
    printf("Address of the pointer ptr1: %p\n", ptr);
    printf("Address of the pointer ptr2: %p\n", ptr1);

    printf("value of variable i: %d\n", i);
    printf("Value of pointer ptr: %d\n", *ptr);
    printf("value of pointer ptr1: %d\n", **ptr1);
    printf("Value of pointer ptr2: %d\n", ***ptr2);
}