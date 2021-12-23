#include<stdio.h>
#include<stdbool.h>

int main() {
    int tempurature = 25;
    bool sunny = true;

    if (tempurature >=0 && tempurature <= 30 && sunny) { // AND operator
        printf("The weather is good!\n");
    } else {
        printf("The weather is bad!\n");
    }

    int tempurature1 = 30;
    if (tempurature1 <= 0 || tempurature1 > 30) { // OR operator
        printf("The weather is bad!\n");
    } else {
        printf("The weather is good!\n");
    }

    bool sunny1 = false;
    if (!sunny1) {
        printf("The weather is bad!\n");
    } else {
        printf("The weather is good!\n");
    }
}