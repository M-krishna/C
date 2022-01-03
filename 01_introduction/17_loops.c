#include<stdio.h>
#include<string.h>

int main() {
    // for loop
    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    printf("\n");

    for(int i = 0; i <= 10; ++i) {
        printf("%d\n", i);
    }
    // end for loop
    /*
        Side note,
        int i = 1,
        x = i++, x = 1, i = 2
        y = ++i, y = 3, i = 3
    */

   // while loop
   char name[25];
   printf("\nWhat is you name? ");
   fgets(name, 25, stdin);
   name[strlen(name) - 1] = '\0';

   while (strlen(name) == 0) {
       printf("\nYou did not enter your name!!!");
       printf("\nWhat is you name? ");
       fgets(name, 25, stdin);
       name[strlen(name) - 1] = '\0';
   }

   printf("Hello %s\n", name);
   // end while loop

   // do while loop
   // while loop = checks the condition, THEN executes a block of code if condition is true
   // do while = always executes a block of code once, THEN checks a condition

   int sum = 0;
   int num = 0;

   do {
       printf("Enter a # above 0: ");
       scanf("%d", &num);
       sum += num;
   }while(num > 0);

   printf("Sum: %d\n", sum);
   // end of do while loop

   // nested loop = a loop inside of another loop
   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("\nEnter # of columns: ");
   scanf("%d", &columns);

   fflush(stdin);

   printf("\nEnter a symbol: ");
   scanf("%c", &symbol);

   for(int i = 1; i <= rows; i++) {
       for(int j = 1; j <= columns; j++){
           printf("%c ", symbol);
       }
       printf("\n");
   }
   // end of nested loop

   // infinite loop
   for(;;) {
       printf("This is an infinite for loop\n");
   }
   // end infinite for loop
}