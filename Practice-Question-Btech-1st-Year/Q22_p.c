#include <stdio.h>

/****** Programed By Ashif ******\
This code defines a function swap() that takes two integer pointers as arguments. 
Inside the function, it uses the * operator to access the values 
pointed to by the pointers and then swaps these values using a temporary variable.

In the main() function, it declares two integer variables x and y and assigns them some values.
It then prints their values before calling the swap() function. After calling the swap() function, 
it prints the values of x and y again*/



void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 5, y = 10;
  printf("Before swapping: x = %d, y = %d\n", x, y);
  swap(&x, &y); 
  printf("After swapping: x = %d, y = %d\n", x, y);
  return 0;
}
