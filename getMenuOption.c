#include <stdio.h>
#include <conio.h>
#include <ctype.h>

char getMenuOption();

int main() {
	char option;

	option = getMenuOption();
}

char getMenuOption() {
  char option;

  do {
    printf("**** MENU ****\n\n");
    printf("[D] - Daily\n");
    printf("[W] - Weekly\n");
    printf("[M] - Monthly\n");
    printf("[Y] - Yearly\n");
    printf("[Q] - Quit\n");

    printf("\nPress option... ");
    option = getch();
    option = toupper(option);
    printf("%c", option);

    if (option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
      printf("\n\nInvalid option. Please check the provided options above.\n\n\n");
    }

    if (option == 'Q') {
      printf("\n\nProgrammers:\n\n");
      printf("SUBRIO, CHARRYL\n");
      printf("LOMARDA, ISMAEL MARLON\n");
      printf("TORAJA, HERRO\n");
    }
  } while (option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');

  return option;
} 