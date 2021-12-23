#include<stdio.h>

void helloWorld(); // function prototype
void greetings(char[]);

// Function Prototypes

// What is it?
// Function declaration, w/o body, before main()
// Ensure that calls to the function are made with the correct arguments

// why is it important?
// Many C compilers do not check for parameter matching
// Missing arguments will result in unexpected behaviour

int main() {
    helloWorld();
    greetings("Krishna");
}

void greetings(char name[]) {
    printf("Hello %s, have a wonderful day!\n", name);
}

void helloWorld() {
    printf("Hello\n");
}