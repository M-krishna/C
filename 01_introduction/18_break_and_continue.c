#include<stdio.h>

int main() {
    // continue = skips rest of the code and forces next iteration of the loop
    // break = exists a loop/switch

    for (int i = 0; i <= 20; i++) {
        // I want to skip the # 13, to do that we can use continue
        if (i == 13) continue;
        printf("%d\n", i);
    }
    // end continue
    
    printf("\n");

    for (int i = 0; i <= 20; i++) {
        // I want to break out of the loop once i reaches 13
        if (i == 13) break;
        printf("%d\n", i);
    }
    // end break
}