#include <stdio.h>

/****** Programed By Ashif ******\
This code reads two operands x and y and an operator op from the user. 
It then uses a switch statement to perform the operation specified by the operator. 
If the operator is invalid, it prints "Invalid operator" and exits the program. Finally, 
it prints the result of the operation.*/


int main() {
  float x, y;
  char op;
  float result;

  printf("Enter the first operand: ");
  scanf("%f", &x);
  printf("Enter the operator (+, -, *, /): ");
  scanf(" %c", &op);
  printf("Enter the second operand: ");
  scanf("%f", &y);

  switch (op) {
    case '+':
      result = x + y;
      break;
    case '-':
      result = x - y;
      break;
    case '*':
      result = x * y;
      break;
    case '/':
      result = x / y; 
      break;
    default:
      printf("Invalid operator\n");
      return 0;
  }

  printf("Result: %.2f\n", result);

  return 0;
}
