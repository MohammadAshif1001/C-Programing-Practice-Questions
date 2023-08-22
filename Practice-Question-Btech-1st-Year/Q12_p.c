#include <stdio.h>

/****** Programed By Ashif ******\
This code reads a number from the user and uses a for loop to calculate the factorial of that number. 
It then prints the factorial.*/


int main() {
  int number;
  long long factorial = 1;

  printf("Enter a number: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }

  printf("Factorial of %d: %lld\n", number, factorial);

  return 0;
}
