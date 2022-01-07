## Pointers

Used to store address of a variable.

### How to declare a pointer?
```c
#include<stdio.h>

int main() {
    int i = 10;
    int *ptr; // declaring a pointer to an integer
    ptr = &i; // &i is to get the address of the variable i and store it in ptr
    printf("%p\n", ptr); // print the address
    printf("%d\n", *ptr); // print the actual value that the pointer points to. *ptr is dereferencing
}
```

### Pointer arithmetic
Pointer arithmetic can be done only on array
4 arithmetic operators(+, -, ++, --)

Increment
```c
#include<stdio.h>

int main() {
    int arr[] = {1,2,3};
    int *ptr;
    ptr = arr; // stores the address of arr[0] to ptr
    ptr++; // increments the address. Since we declare pointer to an integer and interger is 4 bytes by default, it'll increment by 4
}
```

Decrement
```c
#include<stdio.h>

int main() {
    int arr[] = {1,2,3};
    int *ptr;
    ptr = &arr[2]; // gets the address of the last element in the array
    ptr--; // decrements by 4 and points to arr[1]
}
```

Comparison
```c
#include<stdio.h>

int main() {
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = &a;
    // here 2 pointers the pointing to the same variable, hence we can use comparison operator on them
    if(ptr1 == ptr2) // like this
}
```

### Array of pointers
Pointing to the first element in an array
```c
#include<stdio.h>
const int MAX = 3;
int main() {
    int arr[MAX] = {1,2,3};
    int *ptr;
    ptr = arr; // now ptr contains the address of the first element in the array
    // if we want to access the elements inside the array using ptr
    for(int i = 0; i < MAX; i++) {
        printf("Address of arr[%d] is %p and Value of arr[%d] is %d\n", i, ptr, i, *ptr);
        ptr++; // increments the pointer to point to the next address
    } 
}
```

Pointing to the whole array
```c
#include<stdio.h>
const int MAX = 3;
int main() {
    int arr[MAX] = {1,2,3};
    int (*ptr)[MAX]; // syntax for declaring pointer to the whole array of intergers.
    ptr = &arr; // ptr contains the address of the 1st element in the array
    // if we want to access the elements of the array using ptr
    for(int i = 0; i < MAX; i++) {
        printf("value of arr[%d] is %d\n", i, *(*a+i)); // *a contains address of the elements + i increments the address and finally *() gets the value
    }
}
```