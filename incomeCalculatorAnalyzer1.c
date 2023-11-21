/*
Description: 
//Programmers: 
LOMARDA, ISMAEL MARLON
SUBRIO, CHARRYL
TORAJA, HERRO
//Date finished:
*/

#include <stdio.h>

int main(){
	char option;
	int period, income, tIncome = 0, sum;
	float average;
	
	do{
	
		do{
			//this will display the menu and validates the choice of the user
			printf("** MENU **\n\n");
			printf("[D] - Daily\n");
			printf("[W] - Weekly\n");
			printf("[M] - Monthly\n");
			printf("[Y] - Yearly\n");
			printf("[Q] - Quit\n");
			
			printf("\nPress option... ");
			option = getche();
			
			if(toupper(option) != 'D' && toupper(option) != 'W' && toupper(option) != 'M' && toupper(option) != 'Y' && toupper(option) != 'Q') {
				printf("\n\nInvalid option, Please refer to the menu above.\n\n\n");
			}
		} while(toupper(option) != 'D' && toupper(option) != 'W' && toupper(option) != 'M' && toupper(option) != 'Y' && toupper(option) != 'Q');
	
		switch(toupper(option)) {
		case 'D': 
			printf("\n\nNumber of Days: ");
			scanf("%d", &period);
			printf("\n");
			for(int i = 1; i <= period; i++) {
				printf("Income Day %d: ", i);
				scanf("%d", &income);
				tIncome += income; 
			}
			printf("\nTotal income within %d Day(s): %d\n\n", period, tIncome);
			average = tIncome / period;
			printf("Average Daily Income: %.2f\n\n\n", average);
			break;
		case 'W':
			printf("\n\nNumber of Weeks: ");
			scanf("%d", &period);
			printf("\n");
			for(int i = 1; i <= period; i++) {
				printf("Income Week %d: ", i);
				scanf("%d", &income);
				tIncome += income; 
			}
			printf("\nTotal income within %d Week(s): %d\n\n", period, tIncome);
			average = tIncome / period;
			printf("Average Weekly Income: %.2f\n\n\n", average);
			break;
		case 'M':
			printf("\n\nNumber of Months: ");
			scanf("%d", &period);
			printf("\n");
			for(int i = 1; i <= period; i++) {
				printf("Income Month %d: ", i);
				scanf("%d", &income);
				tIncome += income; 
			}
			printf("\nTotal income within %d Month(s): %d\n\n", period, tIncome);
			average = tIncome / period;
			printf("Average Monthly Income: %.2f\n\n\n", average);
			break;
		case 'Y':
			printf("\n\nNumber of Years: ");
			scanf("%d", &period);
			printf("\n");
			for(int i = 1; i <= period; i++) {
				printf("Income Year %d: ", i);
				scanf("%d", &income);
				tIncome += income; 
			}
			printf("\nTotal income within %d Year(s): %d\n\n", period, tIncome);
			average = tIncome / period;
			printf("Average Yearly Income: %.2f\n\n\n", average);
			break;
    	}
    	
	} while(toupper(option) != 'Q'); 

	return 0;
}
