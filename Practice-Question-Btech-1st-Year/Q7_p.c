#include <stdio.h>


/****** Programed By Ashif ******\
This code reads three numbers x, y, and z from the user and compares them using the > operator.
It then prints the greatest number using a series of if-else statements.*/


int main() {
  int x, y, z;

  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("Enter the second number: ");
  scanf("%d", &y);
  printf("Enter the third number: ");
  scanf("%d", &z);

  if (x > y && x > z) {
    printf("The greatest number is %d\n", x);
  } else if (y > x && y > z) {
    printf("The greatest number is %d\n", y);
  } else {
    printf("The greatest number is %d\n", z);
  }

  return 0;
}
