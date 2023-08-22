#include <stdio.h>


/****** Programed By Ashif ******\
This code reads a number from the user and checks whether it is even or odd by using the 
modulo operator % and the equality operator ==. If the number is even, it prints "The number is even",
 otherwise it prints "The number is odd".*/


int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("The number is even\n");
  } else {
    printf("The number is odd\n");
  }

  return 0;
}
