#include<stdio.h>
#include<string.h>

// struct = collection of related members ("Variables")
//          they can be of different data types
//          listed under one name in a memory block
//          very similar to classes in other languages(but no methods)
// basically user defined data type

struct Player
{
    char name[20];
    int age;
};

struct Student {
    char name[20];
    int age;
    
};


int main() {
    struct Player player1; // this is how to create objects(variables) for the struct(speaking in terms of "class")
    struct Player player2;

    // assign data
    strcpy(player1.name, "faze");
    player1.age = 24;

    strcpy(player2.name, "neo");
    player2.age = 21;

    printf("Player 1 name is %s and age is %d\n", player1.name, player1.age);
    printf("Player 2 name is %s and age is %d\n", player2.name, player2.age);

    // another way of declaration
    struct Player player3 = {"krish", 20};
    printf("Player 3 name is %s and age is %d\n", player3.name, player3.age);

    // end of structs
    
    // start array of structs
    struct Student student1 = {"faze", 20};
    struct Student student2 = {"neo", 21};
    struct Student student3 = {"krish", 22};
    struct Student student4 = {"tom", 23};

    // create an array of structs
    struct Student students[] = {student1, student2, student3, student4};

    // iterate over the students array and print student
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("%-1s\t", students[i].name);
        printf("%d\n", students[i].age);
    }

    // end array of structs
}