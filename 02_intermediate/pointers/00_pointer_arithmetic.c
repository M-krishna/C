#include<stdio.h>

// Pointer arithmetic
// 4 arithmetic operators(+, -, ++, --)
// only on array

void pointer_arithmetic_increment();
void pointer_arithmetic_decrement();
void pointer_comparison();

int main() {
    pointer_arithmetic_increment();
    pointer_arithmetic_decrement();
    pointer_comparison();
}

void pointer_arithmetic_increment() {
    printf("Pointer arithmetic increment\n");
    int arr[] = {1,2,3};
    int *ptr; // declares pointer to a interger
    ptr = arr; // stores the address of arr[0]

    // iterate over the array and print out the address and value
    for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("Address of arr[%d] is %p\n", i, ptr);
        printf("Value of arr[%d] is %d\n", i, *ptr);
        ptr++; // increment the address
        /*
            here we have integer array, so after each pointer increment
            it will point to the next integer location. which is 4 bytes 
            next to the current location.

            If we have a character array and we increment the pointer
            then it will point to the next character location which is
            1 byte next to the current location.
        */
    }
}

void pointer_arithmetic_decrement() {
    printf("\nPointer arithmetic decrement\n");
    int arr[] = {1,2,3};
    int *ptr;
    ptr = &arr[sizeof(arr)/sizeof(arr[0]) - 1]; // the reason for using '&' here is because we are accessing the last element in the array.
    // by default if we use arr directly it will get the address of the first element

    for(int i = sizeof(arr)/sizeof(arr[0]) - 1; i >= 0; i--) {
        printf("Address of arr[%d] is %p\n", i, ptr);
        printf("Value of arr[%d] is %d\n", i, *ptr);
        ptr--; // decrement the address
    }
}

void pointer_comparison() {
    printf("\nPointer comparison\n");
    int i = 10;
    int *ptr1;
    int *ptr2;

    ptr1 = &i; // ptr1 points to the address of i
    ptr2 = &i; // ptr2 points to the address of i

    if(ptr1 == ptr2) { // comparison operator
        printf("ptr1 and ptr2 are equal\n");
    } else {
        printf("ptr1 and ptr2 are not equal\n");
    }
}