#include <stdio.h>
#include <string.h>

void displayTotAvg(char*, char*);

main() {
	char* periods[] = {"Day", "Dai"};
	char whatPeriod[100];
	char whatPeriod2[100];
	
	strcpy(whatPeriod, periods[0]);
	strcpy(whatPeriod2, periods[1]);
	
	displayTotAvg(whatPeriod, whatPeriod2);
}

void displayTotAvg(char* whatPeriod, char* whatPeriod2) {
	printf("\nTotal income within  %ss: \n\n", whatPeriod);
	printf("Average %sly Income: \n\n\n", whatPeriod2);
	printf("Press any key to continue");
	getch();
	system("cls");
}
