#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_ANSWER  "\x1b[35m"

int option;

void CtoF() {

  float celsiusValue;
  float result;
  float decimal = 1.8;
  printf(ANSI_COLOR_GREEN);
  printf("Welcome to Celsius to Fahrenheit converter.\n\n");
  printf(ANSI_COLOR_RESET);
  printf("Please enter the temperature value in celsius;\n");
  scanf("%f", &celsiusValue);
  result = (celsiusValue * decimal) + 32;
  printf(ANSI_COLOR_ANSWER);
  printf("%f\n\n", result);
  printf(ANSI_COLOR_RESET);
  
}

void FtoC() {
  
  float fahValue;
  float result;
  float decimal = 0.555555555555;
  printf(ANSI_COLOR_GREEN);
  printf("Welcome to the Fahrenheit to Celsius converter\n\n");
  printf(ANSI_COLOR_RESET);
  printf("Please enter the value in Fahrenheit;\n");
  scanf("%f", &fahValue);
  result = (fahValue - 32) * decimal;
  printf(ANSI_COLOR_ANSWER);
  printf("%f\n\n", result);
  printf(ANSI_COLOR_RESET);
}



int main(int argc, char const *argv[]) {
  printf(ANSI_COLOR_GREEN);
  printf("Welcome to the temperature converter\n\n");
  printf(ANSI_COLOR_RESET);
  do {
    printf("Please enter a option to continue;\n1) Convert Celsius to Fahrenheit\n2) Convert Fahrenheit to Celsius\n3) Exit the program.\n");
    printf("Please enter only a number>>>\n");
    scanf("%d", &option);
    if (option == 1) {
      CtoF();
    } else if (option == 2) {
      FtoC();
    } else if (option == 3) {
      printf(ANSI_COLOR_ANSWER);
      printf("See ya\n");
      printf(ANSI_COLOR_RESET);
      exit(1);
    } else {
      printf(ANSI_COLOR_RED);
      printf("Please enter a valid option!\n\n");
      printf(ANSI_COLOR_RESET);
    }
  } while (1);
  return 0;
}
