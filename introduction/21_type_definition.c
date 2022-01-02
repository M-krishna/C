#include<stdio.h>

// typedef for char user[25]
typedef char user[25]; // here user is the nickname

// struct without typedef
struct Player {
    char name[20];
    int age;
};

// struct with typedef
typedef struct Person {
    char name[25];
    int age;
} Person;


int main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // here we have a user variable with 25 bytes allocated to it.
    // if we want to use the same type in so many other places
    // we have to create it every time. Instead we can create a 
    // typedef and use that
    char user1[25] = "fazeneo";
    printf("Without using typedef %s\n", user1);

    user user2 = "krishna";
    printf("Using typedef %s\n", user2);

    // we can also use typedef to struct
    // without using typedef struct
    struct Player player1 = {"fazeneo", 24};
    struct Player player2 = {"krishna", 24};

    printf("\nWithout using typedef struct\n");
    printf("Hey %s, your age is %d\n", player1.name, player1.age);
    printf("Hey %s, your age is %d\n", player2.name, player2.age);

    // using typedef struct
    printf("\nUsing typedef struct\n");
    Person person1 = {"fazeneo", 24};
    Person person2 = {"krishna", 24};
    printf("Hey %s, your age is %d\n", person1.name, person1.age);
    printf("Hey %s, your age is %d\n", person2.name, person2.age);
}