#include <stdio.h>

/****** Programed By Ashif ******\
This code reads a year from the user and checks whether it is a leap year using the following rules:
@If the year is divisible by 4 but not by 100, it is a leap year.
@If the year is divisible by 400, it is a leap year.
It then prints "The year is a leap year" or "The year is not a leap year" depending on the result.*/


int main() {
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("The year is a leap year\n" , year);
  } else {
    printf("The year is not a leap year\n" , year);
  }

  return 0;
}
