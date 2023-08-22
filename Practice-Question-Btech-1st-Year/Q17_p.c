#include <stdio.h>
#include <math.h>

/****** Programed By Ashif ******\
This code works in a similar way to the previous one, but it
converts the decimal number into a binary number instead.*/


int main() {
  int binary;
  int decimal = 0;
  int i = 0;

  printf("Enter a binary number: ");
  scanf("%d", &binary);

  while (binary != 0) {
    decimal += (binary % 10) * pow(2, i);
    i++;
    binary /= 10;
  }

  printf("Decimal equivalent: %d\n", decimal);

  return 0;
}
