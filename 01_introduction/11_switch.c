#include<stdio.h>

int main() {
    char grade;

    printf("Enter your letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You Failed!\n");
        break;
    default:
        printf("Please enter valid grade!\n");
        break;
    }
}