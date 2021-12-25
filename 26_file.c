#include<stdio.h>

void readFirstLineFromFile(); // function prototype
void readFromFile(); 
void writeToFile();
void appendToFile();
void deleteFile();


int main() {
    // FILE is a datatype
    readFirstLineFromFile();
    // readFromFile();
    // writeToFile();
    // appendToFile();
    // deleteFile();
}

void writeToFile() {
    FILE *fp = fopen("text.txt", "w"); // fopen returns a file pointer
    // fopen takes in 2 arguments, name of the file and mode
    // mode can be - "r", "w", "a"
    // r - read, w - write, a - append

    fprintf(fp, "Hello krishna"); // fprintf writes to the file.

    fclose(fp); // fclose closes the file. Always close the file once the operations are done.
}

void readFirstLineFromFile() {
    FILE *fp = fopen("text.txt", "r");
    char buffer[255];
    fgets(buffer, 255, fp);
    printf("%s\n", buffer);
}

void readFromFile() {
    // READ from file
    FILE *fp1 = fopen("text.txt", "r"); // read mode

    // Now to read the data from the file we need to create a buffer
    // that can store the lines from the file.
    char buffer[255]; // 255 bytes

    // fgets is used to read from the file and store it on buffer line by line
    // to print all the lines we need to iterate over the file till NULL
    while(fgets(buffer, 255, fp1) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp1);
}

void appendToFile() {
    FILE *fp = fopen("text.txt", "a"); // a for append mode
    fprintf(fp, "\nHow are you?");
    fclose(fp);
}

void deleteFile() {
    // If we want to delete the file we can use remove function
    int a = remove("text.txt");
    // just wanted to check what remove returns
    printf("%d\n", a);
}