#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main() {
	char whatPeriod1[] = "Dai", whatPeriod2[] = "Day";
	int period = 2;
	float income, totIncome; 
	printf("INCOME CALCULATOR\n\n");
	printf("**** %sly ****\n\n", whatPeriod1);
	printf("Number of %ss: %d\n\n", whatPeriod2, period);
	for(int i = 1; i <= period; i++) {
		do {
			printf("Income %s %d: ", whatPeriod2, i);		
			if (scanf("%f", &income) != 1 || income <= 0) {
				fflush(stdin);
				printf("Invalid input, please enter valid income amounts only.\n");
				printf("Press any key to continue ");
//				printf("\n\n");
//				getch();
				printf("\033[2K");
			} else {
				break;
			}
		} while ((income) != 1 || income <= 0);
		totIncome += income;
	}
}