#include<stdio.h>

// Pointer arithmetic
// 4 arithmetic operators(+, -, ++, --)
// only on array

int main() {
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