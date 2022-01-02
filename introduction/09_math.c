#include<stdio.h>
#include<math.h>

int main() {
    double A = sqrt(16);
    double B = pow(2, 5);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-101);
    double G = log(8);
    double H = sin(34);
    double I = cos(24);
    double J = tan(87);

    printf("square root of 16: %lf\n", A);
    printf("2^5 is: %lf\n", B);
    printf("round(3.14) is: %d\n", C);
    printf("ceil(3.14) is: %d\n", D);
    printf("floor(3.99) is: %d\n", E);
    printf("absolute value of -101 is: %lf\n", F);
    printf("log 8 is: %lf\n", G);
    printf("sin(34) is: %lf\n", H);
    printf("cos(24) is: %lf\n", I);
    printf("tan(87) is: %lf\n", J);
}