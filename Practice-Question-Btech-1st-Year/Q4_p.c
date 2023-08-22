#include <stdio.h>


/****** Programed By Ashif ******\
This code reads the temperature in Centigrade from the user and 
converts it into Fahrenheit using the formula fahrenheit = (temperature * 9 / 5) + 32. 
It then prints the temperature in Fahrenheit.*/

int main() {
  float temperature;
  float fahrenheit;

  printf("Enter the temperature in Centigrade: ");
  scanf("%f", &temperature);

  fahrenheit = (temperature * 9 / 5) + 32;
  

  printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

  return 0;
}
