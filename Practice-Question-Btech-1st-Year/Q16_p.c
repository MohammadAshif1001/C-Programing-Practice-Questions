#include <stdio.h>
#include <math.h>


/****** Programed By Ashif ******\
This code uses two nested while loops to check whether each number from 1 to 100 is an Armstrong number.
An Armstrong number is a number whose digits, when raised to the power of the number of digits and added,
equal the original number. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

The outer loop iterates over the numbers from 1 to 100, and the inner loops count the number of digits in
each number and calculate the sum of the digits raised to the power of the number of digits. If the sum is
equal to the number, it is an Armstrong number and it is printed.*/


int main() {
  printf("Armstrong numbers from 1 to 100:\n");

  for (int number = 1; number <= 100; number++) {
    int copy = number;
    int digits = 0;
    int sum = 0;

    while (copy != 0) {
      digits++;
      copy /= 10;
    }

    copy = number;
    while (copy != 0) {
      sum += pow(copy % 10, digits);
      copy /= 10;
    }

    if (sum == number) {
      printf("%d ", number);
    }
  }

  printf("\n");

  return 0;
}
