#include <stdio.h>
#include <conio.h>
#include <ctype.h>

char getMenuOption();
int calculateIncome(int);

int main() {
  char option;

  do {
    option = getMenuOption();

    switch (option) {
      case 'D':
        calculateIncome(7); // Daily income calculation
        break;
      case 'W':
        calculateIncome(4); // Weekly income calculation
        break;
      case 'M':
        calculateIncome(12); // Monthly income calculation
        break;
      case 'Y':
        calculateIncome(1); // Yearly income calculation
        break;
    }
  } while (option != 'Q');
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

int calculateIncome(int periodName, int period) {
  float income, totIncome = 0;
  int i;

  for (i = 1; i <= period; i++) {
    do {
      printf("Income %s %d: ", periodName, i);
      if (scanf("%f", &income) != 1 || income < 0) {
        fflush(stdin);
        printf("\nInvalid input, please enter valid income amounts only.\n\n\n");
      } else {
        break;
      }
    } while (income < 0);

    totIncome += income;
  }

  float avgIncome = totIncome / period;
  printf("\nTotal income within %d %s: %.2f\n\n", period, periodName[i], totIncome);
  printf("Average %s Income: %.2f\n\n\n", periodName[i], avgIncome);

  return 0;
}