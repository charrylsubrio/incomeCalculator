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
#include <string.h>

#define errorMes1 "Invalid option. Please check the valid options above.\nPress any key to continue ... "
#define errorMes2 "Invalid input, please enter whole number greater than 1 only.\nPress any key to continue ... "
#define errorMes3 "Invalid input, income amounts must be greater than 0.\nPress any key to continue ... "
#define credits "Programmers:\n\nSUBRIO, CHARRYL\nLOMARDA, ISMAEL MARLON\nTORAJA, HERRO\n"

int getPeriod(char *, char *);
float getIncomes(int, char *, char *);
void displayTotAvg(int, float, char *, char *);

int main() {
	int period;
	float income, totIncome, avgIncome;
	char option, periodName1[6], periodName2[6], *periods[] = {"DAI", "DAY", "WEEK", "MONTH", "YEAR"};

	do {
		do {
			printf("* INCOME CALCULATOR *\n\n");
			printf("***** MAIN MENU *****\n\n");
			printf("[D] - DAILY\n");
			printf("[W] - WEEKLY\n");
			printf("[M] - MONTHLY\n");
			printf("[Y] - YEARLY\n");
			printf("[Q] - QUIT\n");

			// asks the user to choose an option
			printf("\nPress an option ... ");
			option = getch();
			option = toupper(option);
			printf("%c\n\n", option);
			
			// validates the user's chosen option and prints an error message if the user presses an invalid value
			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("%s", errorMes1);
				getch();
				system("cls");
			} else if(option == 'Q') {
				break;
			} else {
				system("cls");
			}
		// repeatedly asks the user to choose an option until the user presses a valid option 
		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');

		switch(option) {
			case 'D':
				strcpy(periodName1, periods[0]);
				strcpy(periodName2, periods[1]);
				break;
			case 'W':
				strcpy(periodName1, periods[2]);
				strcpy(periodName2, periods[2]);
				break;
			case 'M':
				strcpy(periodName1, periods[3]);
				strcpy(periodName2, periods[3]);
				break;
			case 'Y':
				strcpy(periodName1, periods[4]);
				strcpy(periodName2, periods[4]);
				break;
			case 'Q':
				printf("%s", credits);
				break;
		}

		if(option != 'Q') {
			period = getPeriod(periodName1, periodName2);
			totIncome = getIncomes(period, periodName1, periodName2);
			displayTotAvg(period, totIncome, periodName1, periodName2);
		}
	} while (option != 'Q');

	return 0;
}

int getPeriod(char *whatPeriod1, char *whatPeriod2) {
	int period;

	do {
		printf("* INCOME CALCULATOR *\n\n");
		printf("****** %sLY ******\n\n", whatPeriod1);
		printf("Number of %sS: ", whatPeriod2);
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
	printf("* INCOME CALCULATOR *\n\n");
	printf("****** %sLY ******\n\n", whatPeriod1);
	printf("**** %d %sS ****\n\n", period, whatPeriod2);
	for(int i = 1; i <= period; i++) {
		do {
			printf("Income %s %d: ", whatPeriod2, i);
			if(scanf("%f", &income) != 1 || income <= 0) {
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

void displayTotAvg(int period, float totIncome, char *whatPeriod1, char *whatPeriod2) {
	float avgIncome = totIncome / period;
	printf("\nTotal income within %d %ss: %.2f\n\n", period, whatPeriod2, totIncome);
	printf("Average %sly Income: %.2f\n\n\n", whatPeriod1, avgIncome);
	printf("Press any key to continue");
	getch();
	system("cls");
}
