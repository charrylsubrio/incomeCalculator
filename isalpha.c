#include <stdio.h>
#include <ctype.h>

int main() {
  char input;

  do {
    printf("Enter an alphabet: ");
    input = getche();

    if (!isalpha(input)) {
      printf("\nInvalid input. Please enter an alphabet.\n");
    }
  } while (!isalpha(input));

  printf("You entered: %c\n", input);

  return 0;
}
