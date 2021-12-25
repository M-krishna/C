#include<stdio.h>

int main() {
    // BITWISE OPERATORS = special operators used in bit level programming

    // & = AND
    // | = OR
    // ^ = XOR
    // << = LEFT SHIFT
    // >> = RIGHT SHIFT

    int x = 8; // binary representation of 8 in 8 bits(1 byte) = 00001000
    int y = 4; // binary representation of 4 in 8 bits(1 byte) = 00000100
    int z = 0;

    // AND
    /*
        00001000
        00000100
        --------
        00000000 -> 0
    */
    z = x & y;
    printf("x & y = %d\n", z);

    // OR
    /*
        00001000
        00000100
        --------
        00001100 -> 12
    */
   z = x | y;
   printf("x | y = %d\n", z);

   // XOR
   /*
        00001000
        00000100
        --------
        00001100 -> 12
   */
  z = x ^ y;
  printf("x ^ y = %d\n", z);

  // LEFT SHIFT
  /*
    Takes 2 operands (x << y)
    left shifts the bits of the first operand(x)
    the second operand(y) decides the number of places to shift

    eg. 6 -> 00000110
    if we left shift 6 by 1 then 00001100 -> 12
	if we left shift 6 by 2 then 00011000 -> 24

	So left shift double the result
  */
  int i = 6;
  z = i << 1;
  printf("6 << 1 = %d\n", z);
  printf("6 << 2 = %d\n", i << 2);

  // RIGHT SHIFT
  /*
	Takes 2 operands (x >> y)
	right shifts the bits of the first operand(x)
	the second operand(y) decides the number of places to shift

	eg. 6 -> 00000110
	if we right shift 6 by 1 then 00000011 -> 3
	if we right shift 6 by 2 then 00000001 -> 1

	So right shifts cuts the result
  */
  z = i >> 1;
  printf("6 >> 1 = %d\n", z);
  printf("6 >> 2 = %d\n", i >> 2);

  // 1's complement operator
  int j = 5;
  z = ~j;
  printf("1s complement of 5 = %d\n", z);
}