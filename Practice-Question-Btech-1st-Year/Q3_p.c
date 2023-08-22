#include <stdio.h>
#include <math.h>
#define PI 3.14159

/****** Programed By Ashif ******\
This code reads the radius of the circle from the user and calculates the area using the 
formula area = PI * radius * radius and the circumference using the formula 
circumference = 2 * PI * radius. It then prints the area and circumference.*/

int main() {
  float radius;
  float area, circumference;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = PI * radius * radius;
  circumference = 2 * PI * radius;

  printf("Area of the circle: %.2f\n", area);
  printf("Circumference of the circle: %.2f\n", circumference);

  return 0;
}
