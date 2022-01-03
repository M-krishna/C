#include<stdio.h>

int main() {
    int age;
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("So you are %d years old.\n", age);
    
    fflush(stdin); // not sure why to use this
    // without line 9 fgets does not wait till getting input
    
    char name[24]; // 24 bytes
    printf("What is your name?\n");
    // scanf("%s", &name); // scanf only reads up to any white spaces
    fgets(name, 24, stdin);
    printf("Hello %s, how are you?\n", name);
}