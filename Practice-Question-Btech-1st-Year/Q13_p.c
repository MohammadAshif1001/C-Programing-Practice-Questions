#include <stdio.h>

/****** Programed By Ashif ******\
This code reads a number from the user and uses a for loop to generate the 
Fibonacci series up to that number of terms. It then prints the series.*/


int main() {
  int number;

  printf("Enter the number of terms: ");
  scanf("%d", &number);

  int a = 0;
  int b = 1;
  int c;

  printf("%d %d", a, b);
  for (int i = 2; i < number; i++) {
    c = a + b;
    printf(" %d", c);
    a = b;
    b = c;
  }

  printf("\n");

  return 0;
}
