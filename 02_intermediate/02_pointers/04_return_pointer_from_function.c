#include<stdio.h>

// return pointer from function

int *return_pointer_from_function(); // this function returns pointer to an integer

int main() {
    int *p;
    p = return_pointer_from_function();
    printf("Address of the pointer variable: %p\n", p);
    printf("Value of the pointer variable: %d\n", *p);
}

int *return_pointer_from_function() {
    static int i = 10; // the reason for using static keyword is to save the varible in a data segment so that it won't get deleted once the function goes out of the scoped
    int *ptr = &i;
    return ptr;
}