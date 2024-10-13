#include <stdio.h>
#include <stdlib.h>

int CODES[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int user;
int position;

int main() {
  printf("This is a simple guessing game\n");
   do {
    printf("Please select a option: \n1)Continue to the game\n2)Exit the game\n");
    int option;
    scanf("%d", &option);
    if (option == 1) {
      printf("Enter '000' to give up.\n");
      int count = 1;
      do {
        printf("Enter a number between 1 and 10 until you guess the correct number %d.\n", position);
        scanf("%d", &user);
        if (position >= 10) {
          position = 0;
        }
        if (user == CODES[position]) {
          printf("You guessed the number correct in %d guess(s)\n\n", count);
          position++;
          break;
        } else if (user == 000) {
          printf("You gave up.\n");
          position++;
          break;
        } else {
          printf("Try again. \n\n");
          position++;
          count++;
        }
      } while(1);
    } else if (option == 2) {
      printf("You exited the program.\n");
      exit(1);
    } else {
      printf("Please enter a valid option\n\n");
    }
  } while(1);
  return 0;
}
