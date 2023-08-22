#include <stdio.h>
#include <stdbool.h>

/****** Programed By Ashif ******\
This code defines a function is_prime() that takes a number as an argument and 
returns true if it is prime, and false if it is not. It then reads a number from 
the user and checks whether it is prime using the is_prime() function. Finally, 
it prints "The number is prime" or "The number is not prime" depending on the result.*/


bool is_prime(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (is_prime(number)) {
    printf("The number is prime\n");
  } else {
    printf("The number is not prime\n");
  }

  return 0;
}
