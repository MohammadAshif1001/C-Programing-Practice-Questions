#include <stdio.h>

/****** Programed By Ashif ******\
This code reads a number from the user and uses a for loop to add all the numbers up to that number. 
It then prints the sum of all the numbers.*/

int main() {
  int number;
  int sum = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    sum += i;
  }

  printf("Sum of all numbers up to %d: %d\n", number, sum);

  return 0;
}
