//Description:
//
//Programmers:
//
//SUBRIO, CHARRYL
//LOMARDA, ISMAEL MARLON
//TORAJA, HERRO
//
//Date finished:

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

#define errorMes1 "Invalid option. Please check the valid options above.\nPress any key to continue ... "
#define errorMes2 "Invalid input, please enter whole number greater than 1 only.\nPress any key to continue ... " 
#define errorMes3 "Invalid input, income amounts must be greater than 0.\nPress any key to continue ... "

int getPeriod(char *, char *);
float getIncomes(int, char *, char *);
void displayTotAvg(int, float, char *, char *);

main() {
	int period;
	float income, totIncome, avgIncome;
	char option, _D[] = "Day",  _D2[] = "Dai", _W[] = "Week", _M[] = "Month", _Y[] = "Year";

	do {
		do {
			printf("INCOME CALCULATOR\n\n");
			printf("**** MENU ****\n\n");
			printf("[D] - Daily\n");
			printf("[W] - Weekly\n");
			printf("[M] - Monthly\n");
			printf("[Y] - Yearly\n");
			printf("[Q] - Quit\n");

			printf("\nPress an option ... ");
			option = getch();
			option = toupper(option);
			printf("%c\n\n", option);

			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("%s", errorMes1);
				getch();
				system("cls");
			} else if(option == 'Q') {
				break;
			} else {
				system("cls");
			}

		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');

		switch(option) {
			case 'D':
				period = getPeriod(_D2, _D);
				totIncome = getIncomes(period, _D2, _D);
				displayTotAvg(period, totIncome, _D, _D2);
				break;
			case 'W':
				period = getPeriod(_W, _W);
				break;
			case 'M':
				period = getPeriod(_M, _M);
				break;
			case 'Y':
				period = getPeriod(_Y, _Y);
				break;
			case 'Q':
				printf("Programmers:\n\n");
				printf("SUBRIO, CHARRYL\n");
				printf("LOMARDA, ISMAEL MARLON\n");
				printf("TORAJA, HERRO\n");
				break;
		}
	} while (option != 'Q');
}

int getPeriod(char *whatPeriod1, char *whatPeriod2) {
	int period;

	do {
		printf("INCOME CALCULATOR\n\n");
		printf("**** %sly ****\n\n", whatPeriod1);
		printf("Number of %ss: ", whatPeriod2);
		scanf("%d", &period);	

		if(period <= 1 || isalpha(period) || getchar() != '\n') {
			printf("\n%s", errorMes2);
			fflush(stdin);
			getch();
			period = 1;
			system("cls");
		} else {
			break;
			system("cls");
		}
		
		system("cls");
	} while (period <= 1 || isalpha(period) || getchar() != '\n');
	
	system("cls");
	
	return period;
}

float getIncomes(int period, char *whatPeriod1, char *whatPeriod2) {
	float income, totIncome;
	printf("INCOME CALCULATOR\n\n");
	printf("**** %sly ****\n\n", whatPeriod1);
	printf("Number of %ss: %d\n\n", whatPeriod2, period);
	for(int i = 1; i <= period; i++) {
		do {
			printf("Income %s %d: ", whatPeriod2, i);		
			if (scanf("%f", &income) != 1 || income <= 0) {
				fflush(stdin);
				printf("\n%s\n", errorMes3);
				getch();
				
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			    // Move the cursor up 2 lines
			    CONSOLE_SCREEN_BUFFER_INFO csbi;
			    GetConsoleScreenBufferInfo(hConsole, &csbi);
			    COORD cursorPos = { csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y - 4 };
			    SetConsoleCursorPosition(hConsole, cursorPos);
			
			    // Clear the last 2 lines
			    DWORD numCharsWritten;
			    DWORD numLines = 4;
			    DWORD cursorLine = csbi.dwCursorPosition.Y - numLines;
			    DWORD charsToWrite = csbi.dwSize.X * numLines;
			    COORD startCoords = { 0, cursorLine };
			    FillConsoleOutputCharacter(hConsole, ' ', charsToWrite, startCoords, &numCharsWritten);
			    SetConsoleCursorPosition(hConsole, cursorPos);
			} else {
				break;
			}
		} while ((income) != 1 || income <= 0);
		totIncome += income;
	}
	return totIncome;
}

void displayTotAvg(int period, float totIncome, char *whatPeriod, char *whatPeriod2) {
	float avgIncome;
	printf("\nTotal income within %d %ss: %.2f\n\n", period, whatPeriod, totIncome);
	printf("Average %sly Income: %.2f\n\n\n", whatPeriod2, totIncome / period);
	printf("Press any key to continue");
	getch();
	system("cls");
}
