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

	do {
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

			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("\n\nInvalid option. Please check the provided options above.\n\n\n");
			}

			if(option == 'Q') {
				printf("\n\nProgrammers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n");
			}

			totIncome = 0;

		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');

		switch(option) {
			case 'D':
				do {
					printf("\n\nNumber of Days: ");
					scanf("%d", &period);
					printf("\n");

					if (period <= 1 || isalpha(period)) {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
						fflush(stdin);
					} else if (getchar() != '\n') {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
					} else {
						break;
					}
				} while (period <= 1 || isalpha(period) || getchar() != '\n');
				
				for(i = 1; i <= period; i++) {
					do {
					    printf("Income Day %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) {
					    	fflush(stdin);
					      	printf("\nInvalid input, please enter valid income amounts only.\n\n\n");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				
				printf("\nTotal income within %d Days: %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;                                         
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
				
			case 'W':
				do {
					printf("\n\nNumber of Weeks: ");
					scanf("%d", &period);
					printf("\n");

					if (period <= 1 || isalpha(period)) {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
						fflush(stdin);
					} else if (getchar() != '\n') {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
					} else {
						break;
					}
				} while (period <= 1 || isalpha(period) || getchar() != '\n');
				
				for(i = 1; i <= period; i++) {
					do {
					    printf("Income Week %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) {
					    	fflush(stdin);
					      	printf("\nInvalid input, please enter valid income amounts only.\n\n\n");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				
				printf("\nTotal income within %d Weeks: %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;                                         
				printf("Average Weekly Income: %.2f\n\n\n", avgIncome);
				break;
				
			case 'M':
				do {
					printf("\n\nNumber of Months: ");
					scanf("%d", &period);
					printf("\n");

					if (period <= 1 || isalpha(period)) {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
						fflush(stdin);
					} else if (getchar() != '\n') {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
					} else {
						break;
					}
				} while (period <= 1 || isalpha(period) || getchar() != '\n');
				
				for(i = 1; i <= period; i++) {
					do {
					    printf("Income Month %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) {
					    	fflush(stdin);
					      	printf("\nInvalid input, please enter valid income amounts only.\n\n\n");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				
				printf("\nTotal income within %d Months: %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;                                         
				printf("Average Monthly Income: %.2f\n\n\n", avgIncome);
				break;
				
			case 'Y':
				do {
					printf("\n\nNumber of Years: ");
					scanf("%d", &period);
					printf("\n");

					if (period <= 1 || isalpha(period)) {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
						fflush(stdin);
					} else if (getchar() != '\n') {
						printf("Invalid input, please enter whole number greater than 1 only.\n");
					} else {
						break;
					}
				} while (period <= 1 || isalpha(period) || getchar() != '\n');
				
				for(i = 1; i <= period; i++) {
					do {
					    printf("Income Year %d: ", i);
						if (scanf("%f", &income) != 1 || income < 0) {
					    	fflush(stdin);
					      	printf("\nInvalid input, please enter valid income amounts only.\n\n\n");
						} else {
							break; 
						}
				  	} while ((income) != 1 || income < 0);
				
					totIncome += income;
				}
				
				printf("\nTotal income within %d Years: %.2f\n\n", period, totIncome);
				avgIncome = totIncome / period;                                         
				printf("Average Yearly Income: %.2f\n\n\n", avgIncome);
				break;
		}
	} while (option != 'Q');
}
