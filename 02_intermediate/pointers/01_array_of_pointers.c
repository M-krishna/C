#include<stdio.h>

// https://docs.microsoft.com/en-us/cpp/c-language/interpreting-more-complex-declarators?redirectedfrom=MSDN&view=msvc-170

// Array of pointers
// which stores array of pointers of any data type
// (stores) array of pointer variables

void normal_array_example();
void pointer_to_an_array();
void array_of_pointers_example();

const int MAX = 3;

int main() {
    normal_array_example();
    pointer_to_an_array();
    array_of_pointers_example();
}

void normal_array_example() {
    printf("Normal array example\n");
    printf("*********************\n");
    int arr[MAX] = {1,2,3};

    for(int i = 0; i < MAX; i++) {
        printf("arr[%d] contains %d\n", i, arr[i]);
    }
    printf("End of Normal array example\n");
}

void pointer_to_an_array() {
    printf("\nPointer to an array example\n");
    printf("*****************************\n");
    // Pointer to an array is known as array pointer.
    // we have a pointer that focuses on 0th element in an array
    // we can also declare a pointer that can pointer to the whole array
    // instead of 0th element in the array

    // example of pointing to the first element in an array
    int arr[MAX] = {10,100,200};
    int *ptr; // declaring pointer to an integer

    ptr = arr; // assigning the address of the 0th element.

    // lets check the address of the 0th element in the array and the pointer
    // both will have same address
    printf("\nAddress of 0th element in the array: %p\n", &arr[0]);
    printf("Address of the pointer variable ptr: %p\n", ptr);

    // access the array elements using pointer
    printf("Array elements\n");
    for (int i = 0; i < MAX; i++) {
        printf("Value of arr[%d] is %d\n", i, *ptr);
        ptr++;
    }
    // end of example of pointing to the first element in an array

    // example of pointing to the whole array
    // syntax: datatype (*variable_name)[SIZE of array];
    int (*a)[MAX]; // pointer to an array of MAX(3) elements
    int b[MAX] = {11,22,33};

    a = &b; // points to the whole array b

    // lets check the address of 0th element in b and address of the pointer a
    // both will have the same address
    printf("\nAddress of the 0th element in b: %p\n", &b[0]);
    printf("Address of the pointer variable a: %p\n", a);
    printf("Value of a: %d\n", *(*a));

    printf("Array elements\n");

    for(int i = 0; i < MAX; i++) {
        printf("Value of b[%d] is %d\n", i, *(*a+i));
    }

    printf("End of Pointer to an array example\n");
 }

void array_of_pointers_example() {
    printf("\nArray of pointers example\n");
    printf("****************************\n");
    int *ptr[MAX]; // declaring an array of pointer to an interger

    int arr[MAX] = {1,2,3};

    for(int i=0; i < MAX; i++) {
        ptr[i] = &arr[i]; // assign the address of each integer
    }

    printf("%p\n", ptr); // prints out the address of the array of pointers.

    for(int i = 0; i < MAX; i++) {
        printf("\nValue of arr[%d] is %d\n", i, *ptr[i]);
        printf("Address of ptr[%d] is %p\n", i, ptr[i]);
    }

    printf("End of Array of pointers example\n");
}