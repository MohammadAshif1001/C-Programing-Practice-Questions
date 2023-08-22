#include <stdio.h>

/****** Programed By Ashif ******\
This code reads the marks of 5 subjects from the user one by one and stores them in an array. 
It then calculates the sum of the marks and the percentage marks obtained by the student 
using the formula percentage = sum / 5. Finally, it prints the sum and percentage marks.*/


int main() {
  int marks[5];
  int sum = 0;
  float percentage;

  for (int i = 0; i < 5; i++) {
    printf("Enter the marks of subject %d: ", i+1);
    scanf("%d", &marks[i]);
    sum += marks[i];
  }

  percentage = (float)sum / 5;

  printf("Sum of marks: %d\n", sum);
  printf("Percentage: %.2f\n", percentage);

  return 0;
}
