#include<stdio.h>

void call_by_value(); // function prototype
void call_by_reference();

// example of a normal function that doesn't accept any arguments
// or return anything(hence the void)
void birthday() {
    printf("Happy birthday to you!\n");
    printf("May god bless you\n");
}

// example of a function that accepts arguments
void birthdayWish(char name[], int age) {
    printf("\nHappy birthday to %s\n", name);
    printf("You are now %d years old!\n", age);
}

// example of a function that accepts arguments and returns value
double square(double num) {
    return num * num;
}

int main() {
    birthday();

    char name[] = "Krishna";
    int age = 21;
    birthdayWish(name, age);

    double x = square(4);
    printf("\n%lf\n", x);

    int i = 10;
    int j = 20;
    // call by value
    call_by_value(i, j); // swap x and y values
    printf("\nValue of i after calling call_by_value(): %d\n", i);
    printf("Value of j after calling call_by_value(): %d\n", j);
    // end call by value

    // call by reference
    call_by_reference(&i, &j);
    printf("\nValue of i after calling call_by_reference(): %d\n", i);
    printf("Value of j after calling call_by_reference(): %d\n", j);
    // end call by reference
}

// swap example
void call_by_value(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// swap example
void call_by_reference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}