#include <stdio.h>
#include <stdlib.h>

void calculator(int num1, int num2, char operator) {
  int result;
  switch(operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '/':
      while (num2 == 0) {
        printf("Division by zero is not allowed. Please enter another number for the second operand:\n>> ");
        scanf("%d", &num2);
      }
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    default:
      printf("Invalid operator. Please rerun the program.\n");
      exit(0);
  }
  printf("The answer is: %d\n", result);
}

int main() {
  int option;
  do {
    printf("Please select an option:\n1: Continue\n2: Leave\n\n>> ");
    scanf("%d", &option);
    if (option == 1) {
      int num1, num2;
      char operator;
      printf("Please enter the first number: \n>> ");
      scanf("%d", &num1);
      printf("Please enter the second number: \n>> ");
      scanf("%d", &num2);
      printf("Please enter an operator (+, -, *, /): \n>> ");
      scanf(" %c", &operator);
      calculator(num1, num2, operator);
    } else if (option == 2) {
      printf("You exited the program.\n");
      break;
    } else {
      printf("Invalid option, please try again.\n");
    }
  } while (option != 2);

  return 0;
}

