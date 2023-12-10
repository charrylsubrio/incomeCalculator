#include <stdio.h>

int main() {
  int input;

  do {
    printf("Enter a whole number: ");
    scanf("%d", &input);

    if (getchar() != '\n') {
      printf("Invalid input. Please enter a whole number.\n");
    }
  } while (getchar() != '\n');

  printf("You entered: %d\n", input);

  return 0;
}
