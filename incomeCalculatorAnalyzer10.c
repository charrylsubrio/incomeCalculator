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

// #define variable value

int main(){
	char option, validOptions[] = {'D', 'W', 'M', 'Y', 'Q'};
	int i, period;
	float income, totIncome, avgIncome;
	
	do{
		do{
			/* ==== displays the menu and scans the user's choice ==== */
			printf("** MENU **\n\n");
			printf("[D] - Daily\n");
			printf("[W] - Weekly\n");
			printf("[M] - Monthly\n");
			printf("[Y] - Yearly\n");
			printf("[Q] - Quit\n");
			
			printf("\nPress option... ");
			option = getch();
			option = toupper(option);
			printf("%c", option);
			
			/* ==== validates the choice and displays an error message if the user inputs an invalid option ====*/
			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("\n\nInvalid option. Please check the provided options above.\n\n\n");
			}
			
			/* ==== to reset totIncome with value of zero every loop ==== */
			totIncome = 0;
			
			/* ==== display credits ==== */
			if(option == 'Q') {
				printf("\n\nProgrammers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n");
			}
		} while(toupper(option) != 'D' && toupper(option) != 'W' && toupper(option) != 'M' && toupper(option) != 'Y' && toupper(option) != 'Q');
	
		switch(toupper(option)) {
		case 'D': 
			do {
				printf("\n\nNumber of Days: ");
				scanf("%d", &period);
				printf("\n");
				if (period <= 0 || isalpha(period)) {
					printf("Invalid input, please enter whole numbers only.\n");
					fflush(stdin);
				} else if (getchar() != '\n') {
					printf("Invalid input, please enter whole numbers only.\n");
				} else {
					break;
				}
			} while (period <= 0 || isalpha(period) || getchar() != '\n');
			/* do {
				printf("\n\nNumber of Days: ");
				scanf("%d", &period);
				printf("\n");
				if (period <= 0 || getchar() != '\n') {
					printf("Invalid input, please enter positive numbers only.\n\n");
					//fflush(stdin);
				} else if (isalpha(period)) {
					printf("Alphabet inputted!\n\n");
					fflush(stdin);
					break;
				} else {
					break;
				}
			} while (period <= 0 || isalpha(period) || getchar() != '\n'); */
			/* mo stop basta symbol do {
				printf("\n\nNumber of Days: ");
				scanf("%d", &period);
				printf("\n");
					if (period <= 0 || isalpha(period)) {
						printf("Invalid input, please enter positive numbers only.");
						fflush(stdin);
					}
			} while (period <= 0); */
			/* do {
    			printf("\n\nNumber of Days: ");
    			scanf("%d", &period);
			} while (scanf("%d", &period) != 1); */
			/*while (1) {
	  			printf("\n\nNumber of Days: ");
	  			// Scan for an integer
	  			scanf("%d", &period);
	  			if (scanf("%d", &period) == 1) {
	    			// Input is valid, break the loop
	    			break;
	  			} else {
	  			
	  				printf("Invalid input. Please enter an integer.\n");
					fflush(stdin);
				  }
	  			
	  			
			} */
			/* while (1) {
	  			printf("\n\nNumber of Days: ");
	  			// Scan for an integer
	  			scanf("%d", &period);
	  			if (scanf("%d", &period) == 1) {
	    			// Input is valid, break the loop
	    			break;
	  			}
	  			// Invalid input, clear the input buffer and try again
	  			printf("Invalid input. Please enter an integer.\n");
	  			fflush(stdin);
			} */
			for(i = 1; i <= period; i++) {
				do {
					printf("Income Day %d: ", i);
					scanf("%f", &income);
					printf("");
						if (income < 0) {
							printf("\nInvalid input, please enter positive numbers only.\n\n");
						} 
				} while (income < 0);
				
					
				totIncome += income; 
			}  
			printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome);
			avgIncome = totIncome / period;
			printf("Average Daily Income: %.2f\n\n\n", avgIncome);
			break;
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
    	}
    	
	} while(toupper(option) != 'Q'); 

	return 0;
}
