#include<stdio.h>

// There are 2 types of variable scopes
// 1) Local variable scope
// 2) Global variable scope

/*
    Global variables are decalred outside of all functions
*/
// decalring a global variable
int i;

// decalring a global variable with same name as local variable
char name[] = "Krishna";

int main() {

    /* 
     variables declared inside a function/any block are considered
     as local variables 
    */
   // declaring local variable inside main() function
   int a;
   int b;
   int c;

   a = 10; // initialize value for local variable
   b = 20;
   c = a + b;
   printf("Value of c: %d\n", c);

   // initializing value for global variable
   i = 50;
   printf("Value of global variable i is %d\n", i);

   /*
    A program can have same name for local and global variables but 
    the value of local variable inside a function will take precedence
   */

  // declaring a local variable with same name as global variable
  char name[] = "Neo";
  printf("Value of name: %s\n", name); // here the value of local variable will take preference
}