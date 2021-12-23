#include<stdio.h>
#include<string.h> // include this header file to use string functions

// Some string functions

int main() {
    char string1[] = "Faze";
    char string2[] = "faze";

    // strcat(string1, string2); // appends string2 to end of string1
    // strcpy(string1, string2); // copy string2 to string1
    // strncpy(string1, string2, 2); // copy n characters of string2 to string1

    int len = strlen(string2);
    printf("%s\n", string1);
    printf("Length of %s is %d\n", string2, len);

    int cmp = strcmp(string1, string2); // string compare all the characters
    // if its equal then it'll return 0 if not it'll return a negative number
    printf("Does %s and %s are equal?:  %d\n", string1, string2, cmp);

    int cmp1 = strncmp(string1, string2, 1); // string compare all n characters
    printf("Does first letter of %s and %s are same?: %d\n", string1, string2, cmp1);

    int cmp2 = strcasecmp(string1, string2); // ignore the case
    printf("%d\n", cmp2);
}