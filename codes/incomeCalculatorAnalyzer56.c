/*
Description:

Programmers:

SUBRIO, CHARRYL
LOMARDA, ISMAEL MARLON
TORAJA, HERRO

Date finished:
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define variable value

int main() {
	char option;
	int i, period;
	float income, totIncome, avgIncome;

	/* ====  ==== */
	do {
		/* ==== displays the menu and validates the choice of the user  ==== */
		do {
			/* ==== options ==== */
			printf("**** MENU ****\n\n");
			printf("[D] - Daily\n");
			printf("[W] - Weekly\n");
			printf("[M] - Monthly\n");
			printf("[Y] - Yearly\n");
			printf("[Q] - Quit\n");

			/* ==== convert the user's choice into capital ==== */
			printf("\nPress option... ");
			option = getch();
			option = toupper(option);
			printf("%c", option);

			/* ==== displays an error message if the user chooses an invalid option ====*/
			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("\n\nInvalid option. Please check the provided options above.\n\n\n");
			}

			/* ==== displays credits before the program exits ==== */
			if(option == 'Q') {
				printf("\n\nProgrammers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n");
			}

			totIncome = 0;

			/* ==== continuesly scans for an option until the user inputs a valid option ==== */
		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');

		/* ==== determines which option to execute ==== */
		switch(option) {
			case 'D':

				/* ==== asks the user to input the number of days and validate its value ==== */
				do {
					printf("\n\nNumber of Days: ");
					scanf("%d", &period);
					printf("\n");

					/* ==== displays an error message if the user inputs an invalid value ==== */
					if (period <= 0 || isalpha(period)) {
						printf("Invalid input, please enter whole numbers only.\n");
						fflush(stdin);
					} else if (getchar() != '\n') {
						printf("Invalid input, please enter whole numbers only.\n");
					} else {
						break;
					}

					/* ==== continuesly scans number of days until the user inputs a whole number ==== */
				} while (period <= 0 || isalpha(period) || getchar() != '\n');
				
				for(i = 1; i <= period; i++) {
					
					do {
					    printf("\nIncome Day %d: ", i);
					    if (scanf("%f", &income) != 1) {
					    	fflush(stdin);
					      	printf("not num");
					    			  
					    } else if (income < 0) {
					    	printf("neg");
						}else {
					      break;
					    }
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				
				printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;

			/* ==== executes when the user chooses option W ==== */
			case 'W':
				do {
					printf("\n\nNumber of Weeks: ");
					scanf("%d", &period);
					printf("\n");
					if (period < 0) {
						printf("Invalid input, please enter positive numbers only.");
					}
				} while (period < 0);
				for(i = 1; i <= period; i++) {
					do {
						printf("Income Week %d: ", i);
						scanf("%f", &income);
						printf("");
						if (income < 0) {
							printf("\nInvalid input, please enter positive numbers only.\n\n");
						}
					} while (income < 0);

					totIncome += income;
				}
				printf("\nTotal income within %d Week(s): %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;
				printf("Average Weekly Income: %.2f\n\n\n", avgIncome);
				break;

			/* ==== executes when the user chooses option M ==== */
			case 'M':
				do {
					printf("\n\nNumber of Months: ");
					scanf("%d", &period);
					printf("\n");
					if (period < 0) {
						printf("Invalid input, please enter positive numbers only.");
					}
				} while (period < 0);
				for(i = 1; i <= period; i++) {
					do {
						printf("Income Month %d: ", i);
						scanf("%f", &income);
						printf("");
						if (income < 0) {
							printf("\nInvalid input, please enter positive numbers only.\n\n");
						}
					} while (income < 0);

					totIncome += income;
				}
				printf("\nTotal income within %d Month(s): %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;
				printf("Average Monthly Income: %.2f\n\n\n", avgIncome);
				break;

			/* ==== executes when the user chooses option Y ==== */
			case 'Y':
				do {
					printf("\n\nNumber of Years: ");
					scanf("%d", &period);
					printf("\n");
					if (period < 0) {
						printf("Invalid input, please enter positive numbers only.");
					}
				} while (period < 0);
				for(i = 1; i <= period; i++) {
					do {
						printf("Income Year %d: ", i);
						scanf("%f", &income);
						printf("");
						if (income < 0) {
							printf("\nInvalid input, please enter positive numbers only.\n\n");
						}
					} while (income < 0);

					totIncome += income;
				}
				printf("\nTotal income within %d Year(s): %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;
				printf("Average Yearly Income: %.2f\n\n\n", avgIncome);
				break;
			default:
				printf("default");
		}

	} while(toupper(option) != 'Q');

	return 0;
}
