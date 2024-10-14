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
      while (1) {
        if (num2 == 0) {
          int num1 = 1;
          int num2 = 1;
          printf("Please enter another two numbers since cant divide a number by 0\n");
          scanf("%d", &num1);
          printf("Enter the second number\n>>");
          scanf("%d", &num2);
          if (num2 == 0) {
            return;
          } else {
            result = num1 / num2;
            break;
          }
        } else {
          break;
        }
      }
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    default:
      printf("Identifier error. Please rerun the program.\n");
      exit(0);
      break;
  }
  printf("The answer is: %d\n", result);
}

int main() {
  int option;
  do {
    printf("Please select a option:\n1:Continue\n2:Leave\n\n>>");
    scanf("%d", &option);
    if (option == 1) {
      int num1;
      int num2;
      char operator;
      printf("Please enter a number: \n>>");
      scanf("%d", &num1);
      printf("Enter another number: \n>>");
      scanf("%d", &num2);
      printf("Please enter a operator that you like to perform the calculation with.\n");
      printf("Available operators:\n+ for addition\n- for substraction\n* for multiplication\n/ for division\n");
      printf("Please enter a option: \n>>");
      scanf(" %c", &operator);
      calculator(num1, num2, operator);
      break;
    } else if(option == 2) {
      printf("You exit the program\n");
      break;
    } else {
      printf("Error try again.\n");
      continue;
    }
  } while(1);
  return 0;
}
