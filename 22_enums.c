#include<stdio.h>

enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
    // enum = a user defined type of named interger identifiers
    //        helps to make the program more readable

    // enums are not strings, but they can be treated as int
    printf("Today is %d\n", Sat);

    // here is an unreadable version of a program
    int today = Sat;
    if(today == 0 || today == 6) { // here we don't know what is 0 and 6 while reading
        printf("Its weekend. Party time!!!\n");
    } else {
        printf("I have to work today!\n");
    }

    // here is the readable version of the above code
    if(today == Sun || today == Sat) {
        printf("Its weekend. Party time!!!\n");
    } else {
        printf("I have to work today!\n");
    }
}