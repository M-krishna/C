#include<stdio.h>

const int MAX = 5;

// Passing pointer to function

void passing_pointer_to_function(int *num);
void passing_array_pointer_to_function(int (*nums)[MAX]); // passing pointer to the whole array(not just the address of the 1st element)

int main() {
    int i = 10;
    printf("Address of i in main function: %p\n", &i);
    passing_pointer_to_function(&i); // pass the address of the variable i

    int nums[MAX] = {1,2,3,4,5};
    int (*ptr)[MAX] = &nums;
    printf("Address of nums inside main: %p\n", &nums);
    printf("Address of nums inside main: %p\n", ptr);
    passing_array_pointer_to_function(ptr);
}

void passing_pointer_to_function(int *num) {
    printf("Value of i: %d\n", *num);
    printf("Address of i in passing_pointer_to_function: %p\n", num);
}

void passing_array_pointer_to_function(int (*nums)[MAX]) {
    printf("Address of nums inside passing_array_pointer_to_function: %p\n", nums);
    int sum = 0;
    // sum the elements and print
    for (int i = 0; i < MAX; i++) {
        sum += *(*nums+i);
    }
    printf("Sum of the array elements: %d\n", sum);
}