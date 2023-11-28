/*
Description: 

Programmers: 

SUBRIO, CHARRYL
LOMARDA, ISMAEL MARLON
TORAJA, HERRO

Date finished:
*/

#include <stdio.h>

int main(){
	char option;
	int i, period;
	float income, totIncome = 0, avgIncome;
	
	do{
	
		do{
			/* ==== displays the menu ==== */
			printf("** MENU **\n\n");
			printf("[D] - Daily\n");
			printf("[W] - Weekly\n");
			printf("[M] - Monthly\n");
			printf("[Y] - Yearly\n");
			printf("[Q] - Quit\n");
			
			printf("\nPress option... ");
			option = getche();
			
			/* ==== validates the chosen menu option and prints an error message if invalid ====*/
			if(toupper(option) != 'D' && toupper(option) != 'W' && toupper(option) != 'M' && toupper(option) != 'Y' && toupper(option) != 'Q') {
				printf("\n\nInvalid option, Please refer to the menu above.\n\n\n");
			}
			
			/* ====  ==== */
			if(toupper(option) == 'Q') {
				printf("\n\nProgrammers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n");
			}
		} while(toupper(option) != 'D' && toupper(option) != 'W' && toupper(option) != 'M' && toupper(option) != 'Y' && toupper(option) != 'Q');
	
		switch(toupper(option)) {
		case 'D': 
			printf("\n\nNumber of Days: ");
			scanf("%d", &period);
			printf("\n");
			for(i = 1; i <= period; i++) {
				printf("Income Day %d: ", i);
				scanf("%f", &income);
				totIncome += income; 
			}
			printf("\nTotal income within %d Day(s): %.2f\n\n", period, totIncome);
			avgIncome = totIncome / period;
			printf("Average Daily Income: %.2f\n\n\n", avgIncome);
			break;
		case 'W':
			printf("\n\nNumber of Weeks: ");
			scanf("%d", &period);
			printf("\n");
			for(i = 1; i <= period; i++) {
				printf("Income Week %d: ", i);
				scanf("%f", &income);
				totIncome += income; 
			}
			printf("\nTotal income within %d Week(s): %.2f\n\n", period, totIncome);
			avgIncome = totIncome / period;
			printf("Average Weekly Income: %.2f\n\n\n", avgIncome);
			break;
		case 'M':
			printf("\n\nNumber of Months: ");
			scanf("%d", &period);
			printf("\n");
			for(i = 1; i <= period; i++) {
				printf("Income Month %d: ", i);
				scanf("%f", &income);
				totIncome += income; 
			}
			printf("\nTotal income within %d Month(s): %.2f\n\n", period, totIncome);
			avgIncome = totIncome / period;
			printf("Average Monthly Income: %.2f\n\n\n", avgIncome);
			break;
		case 'Y':
			printf("\n\nNumber of Years: ");
			scanf("%d", &period);
			printf("\n");
			for(i = 1; i <= period; i++) {
				printf("Income Year %d: ", i);
				scanf("%f", &income);
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
