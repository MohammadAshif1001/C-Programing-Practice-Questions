#include <stdio.h>

/****** Programed By Ashif ******\
This code defines two variables x and y with initial values of 5 and 10, respectively.
It then uses a temporary variable temp to swap the values of x and y. 
Finally, it prints the values of x and y before and after the swap.*/

int main() {
  int x = 5;
  int y = 10;

  printf("Before swap: x = %d, y = %d\n", x, y);

  int temp = x;
  x = y;
  y = temp;

  printf("After swap: x = %d, y = %d\n", x, y);

  return 0;
}
