#include<stdio.h>

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
}