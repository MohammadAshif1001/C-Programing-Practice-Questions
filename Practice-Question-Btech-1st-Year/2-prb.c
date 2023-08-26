#include <stdio.h>
#include <math.h>


/****** Programed By Ashif ******\
This code reads the Principal, Rate of interest, and Time from the user and calculates the 
Simple Interest using the formula simple_interest = (principal * rate * time) / 100 and 
the Compound Interest using the formula compound_interest = principal * (1 + rate / 100) ^ time - principal. 
It then prints the Simple Interest and Compound Interest.*/


int main() {
  float principal, rate, time;
  float simple_interest, compound_interest;

  printf("Enter the principal amount: ");
  scanf("%f", &principal);
  printf("Enter the rate of interest: "); 
  scanf("%f", &rate);
  printf("Enter the time (in years): ");
  scanf("%f", &time);

  simple_interest = (principal * rate * time) / 100;
  compound_interest = principal * pow(1 + rate / 100, time) - principal;

  printf("Simple Interest: %.2f\n", simple_interest);
  printf("Compound Interest: %.2f\n", compound_interest);

  return 0;
}
