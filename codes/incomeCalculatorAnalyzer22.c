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

int getPeriod(char *);
float getIncome(int);
float computeAvgIncome(float, int);
float computeTotIncome(float);

main() {
	char option, _D[] = "Days";
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
			printf("%c\n\n", option);
	
			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("Invalid option. Please check the provided options above.\n\n\n");
			}
	
			if(option == 'Q') {
				printf("Programmers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n\n\n");
			}

		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');
		
		switch(option) {
			case 'D':
				
				period = getPeriod(_D);
				
				printf("\nTotal income within %d Days: %.2f\n\n", period, totIncome);                              
				printf("Average Daily Income: %.2f\n\n\n", avgIncome);
				break;
		}
		
		
		income = getIncome(period);
		totIncome = computeTotIncome(income);
		avgIncome = computeAvgIncome(totIncome, period);
		
		
	} while (option != 'Q');
}

int getPeriod(char *whatPeriod) {
	int period;
	do {
		printf("\nNumber of %s: ", whatPeriod);
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
	return period;
} 

float computeTotIncome(float income) {
	float totIncome = income;
	return totIncome;
}



float getIncome(int period) {
	int i;
	float income, totIncome;
	
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
	return totIncome;
}

float computeAvgIncome(float totIncome, int period) {
	float avgIncome = totIncome / period;	
	return avgIncome;
}