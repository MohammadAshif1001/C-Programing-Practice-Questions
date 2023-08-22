#include <stdio.h>

/****** Programed By Ashif ******\
This code reads a number from the user and uses a while loop to reverse it. 
It then prints the reversed number.*/


int main() {
  int number;
  int reverse = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  while (number != 0) {
    reverse = reverse * 10 + number % 10;
    number /= 10;
  }

  printf("Reverse of the number: %d\n", reverse);

  return 0;
}
 