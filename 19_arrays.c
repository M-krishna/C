#include<stdio.h>

int main() {
    // array = a data structure that can store many values of same data type.

    double prices[] = {1.0, 2.0, 3.0, .40, 5.0};

    printf("%.1lf\n", prices[0]);
    printf("%.1lf\n", prices[1]);
    printf("%.1lf\n", prices[2]);
    printf("%.1lf\n", prices[3]);
    printf("%.1lf\n", prices[4]);

    // iterate over an array
    // for the condition, calculate the total size of the array
    // and calculate the size of the data type
    printf("\nIterate over an array using for loop\n");
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("%.1lf\n", prices[i]);
    }

    // what does sizeof returns, well it returns bytes of the data type
    // in our case we use double so it should return 8
    printf("%lu\n", sizeof(prices[0]));
    printf("%lu\n", sizeof(prices)); // should return 40, cause prices contains 5 elements each of 8 bytes

    // 2D arrays
    // array within array

    int numbers[2][3] = {
        {1,2,3}, 
        {4,5,6}
    };

    // how to calculate the size of rows and columns
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    
    printf("\n");
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }


}