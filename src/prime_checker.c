#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void check() {
  int userNum;
  printf(ANSI_COLOR_GREEN);
  printf("Enter a number to check if it is a prime number\n");
  printf(ANSI_COLOR_RED);
  printf("NOTE: Only whole numbers\n>>> ");
  printf(ANSI_COLOR_RESET);
  scanf("%d", &userNum);
  if (userNum == 1 || userNum < 1) {
    printf("The number is not a prime number.\n");
    exit(1);
  }
  for (int i = 2; i <= sqrt(userNum); i++) {
    if (userNum % i == 0) {
      printf("The number is not a prime number.\n");
      exit(1);
    }
  
  }
  printf("The number is a prime number.\n");
  exit(1);
}

int main(int argc, char const *argv[]) {
  printf(ANSI_COLOR_GREEN);
  printf("########################\n#######Welcome to#######\n#prime number checker.##\n########################\n");
  printf(ANSI_COLOR_RESET);
  int option;
  do {
    printf("Please select a option to continue:\n\n");
    printf("1) To continue\n2) To exit\n\n>>> ");
    scanf("%d", &option);
    if (option == 2) {
      printf(ANSI_COLOR_MAGENTA);
      printf("C ya..\n");
      printf(ANSI_COLOR_RESET);
      exit(1);
    } else if (option == 1) {
      check();
      break;
    } else {
      printf(ANSI_COLOR_RED);
      printf("Error please try again...\n\n");
      printf(ANSI_COLOR_RESET);
      break;
    }
  } while (1);
  return 0;

}
