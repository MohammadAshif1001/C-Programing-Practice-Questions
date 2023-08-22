#include <stdio.h>

/****** Programed By Ashif ******\
This code reads two numbers x and y from the user and compares them using the equality 
operator ==. If x and y are equal, it prints "The numbers are equal", 
otherwise it prints "The numbers are not equal".*/

int main() {
  int a, s;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &s);
 
  if (a == s) {
    printf("The numbers are equal\n");
  } else {
    printf("The numbers are not equal\n");
  }

  return 0;
}
