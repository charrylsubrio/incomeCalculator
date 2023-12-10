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
				
				/* ==== scans income ammounts ==== */
				for(i = 1; i <= period; i++) {
					do {
					    printf("\nIncome Day %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) { //=> displays an error message if user inputs an invalid value 
					    	fflush(stdin);
					      	printf("not num");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome); //displays the total income & average income
				avgIncome = totIncome / period;                                         
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
			case 'W':

				/* ==== asks the user to input the number of weeks and validate its value ==== */
				do {
					printf("\n\nNumber of Weeks: ");
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

				  /* ==== continuesly scans number of weeks until the user inputs a whole number ==== */
				} while (period <= 0 || isalpha(period) || getchar() != '\n');
				
				/* ==== scans income ammounts ==== */
				for(i = 1; i <= period; i++) {
					do {
					    printf("\nIncome Week %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) { //=> displays an error message if user inputs an invalid value 
					    	fflush(stdin);
					      	printf("");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome); //displays the total income & average income
				avgIncome = totIncome / period;                                         
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
			case 'M':

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
				
				/* ==== scans income ammounts ==== */
				for(i = 1; i <= period; i++) {
					do {
					    printf("\nIncome Day %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) { //=> displays an error message if user inputs an invalid value 
					    	fflush(stdin);
					      	printf("not num");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome); //displays the total income & average income
				avgIncome = totIncome / period;                                         
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
			case 'Y':

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
				
				/* ==== scans income ammounts ==== */
				for(i = 1; i <= period; i++) {
					do {
					    printf("\nIncome Day %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) { //=> displays an error message if user inputs an invalid value 
					    	fflush(stdin);
					      	printf("not num");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome); //displays the total income & average income
				avgIncome = totIncome / period;                                         
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
		}
	} while (option != 'Q');
}
