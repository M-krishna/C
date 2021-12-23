#include<stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y; // ternary operator condition ? xvalue if true : yvalue if false
}

int main() {
    int x = findMax(5, 3);
    printf("%d\n", x);
}