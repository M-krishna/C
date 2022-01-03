# C

### Some basic integer types
| Type | Storage size | Value range |
| ---- | ------------ | ----------- |
| char | 1 byte | -128 to 127 |
| unsigned char | 1 byte | 0 to 255 |
| int | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| unsigned int | 4 bytes | 0 to 4,294,967,295 |
| short | 2 bytes | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| float | 4 bytes | |
| double | 8 bytes | |

### Get the exact size of a type or a variable
We can use `sizeof` operator. Eg.
```c
#include <stdio.h>

int main() {
    int a;
    prinf("%lu bytes\n", sizeof(a)); // should print 4 bytes
}
```

### The void datatype
| S.No | Types & Description |
| ---- | ------------------- |
| 1 | Functions returns as void. Eg. void print() |
| 2 | Functions arguments as void. Eg. int rand(void) |

### Variable Declaration & Initialization example
```c
int i, j, k; // declares 3 variables of i, j and k
int i = 10; // declares variable of type int and initialize a value of 10

char c;
float f;
double d;
```
