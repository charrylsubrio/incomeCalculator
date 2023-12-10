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

// constant error messages and program credits
#define errorMes1 "Invalid option value. Please check out the valid options above.\nPress any key to re-choose ... "
#define errorMes2 "Invalid period value. Please enter a whole number greater than 1.\nPress any key to re-enter ... "
#define errorMes3 "Invalid amount value. Income amounts must be greater than 0.\nPress any key to re-input ... "
#define credits "Programmers:\n\nSUBRIO, CHARRYL\nLOMARDA, ISMAEL MARLON\nTORAJA, HERRO\n\n"

// function declarations
int getPeriod(char *, char *);
float getIncomes(int, char *, char *);
void displayTotAvg(int, float, char *, char *);

main() {
	int period;
	float income, totIncome, avgIncome;
	char option, periodName1[6], periodName2[6], *periods[] = {"DAI", "DAY", "WEEK", "MONTH", "YEAR"};

	do {
		do {
			printf("***** MAIN MENU *****\n\n");
			printf("[D] - DAILY\n");
			printf("[W] - WEEKLY\n");
			printf("[M] - MONTHLY\n");
			printf("[Y] - YEARLY\n");
			printf("[Q] - QUIT\n");

			// prompt user for option
			option = getch();
			option = toupper(option);
			printf("%c\n\n", option);
			
			// validates option and displays error for invalid input
			if(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q') {
				printf("%s", errorMes1);
				getch();
				system("cls");
			} else if(option == 'Q') {
				system("cls");
				break;
			} else {
				system("cls");
			}
			
		// do-while loop ensures valid option is chosen
		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');
		
		// execute code based on user choice
		switch(option) {
			
			// sets period name to "DAY"
			case 'D':
				strcpy(periodName1, periods[0]);
				strcpy(periodName2, periods[1]);
				break;
				
			// sets period name to "WEEK"	
			case 'W':
				strcpy(periodName1, periods[2]);
				strcpy(periodName2, periods[2]);
				break;
				
			// sets period name to "MONTH"
			case 'M':
				strcpy(periodName1, periods[3]);
				strcpy(periodName2, periods[3]);
				break;
				
			// sets period name to "YEAR"	
			case 'Y':
				strcpy(periodName1, periods[4]);
				strcpy(periodName2, periods[4]);
				break;
				
			// display program credits
			case 'Q':
				printf("Thank you for using INCOME CALCULATOR! Until next time!\n\n");
				printf("%shttps://github.com/charrylsubrio/incomeCalculator/\n", credits);
				break;
		}
		
		if(option != 'Q') {
			
			// calls the getPeriod function
			period = getPeriod(periodName1, periodName2);
			
			// calls the getIncome function
			totIncome = getIncomes(period, periodName1, periodName2);
			
			// calls the displayTotAvg function
			displayTotAvg(period, totIncome, periodName1, periodName2);
		}
	
	// main menu loop 
	} while (option != 'Q');
}

// function definitions

// get valid period
int getPeriod(char *whatPeriod1, char *whatPeriod2) {
	int period;

	do {
		printf("* INCOME CALCULATOR *\n\n");
		printf("****** %sLY ******\n\n", whatPeriod1);
		printf("Number of %sS: ", whatPeriod2);
		
		// scan and validate user input (show error on invalid)
		if(scanf("%d", &period) != 1 || period <= 1 || getchar() != '\n') {
			printf("\n%s", errorMes2);
			fflush(stdin);
			getch();
			period = 1;
			system("cls");
		} else {
			break;
		}
		system("cls");
		
	// repeat until valid whole number > 1 entered
	} while (!(period > 1));
	system("cls");
	
	// returns the value of period to caller
	return period;
}

// get valid income amounts
float getIncomes(int period, char *whatPeriod1, char *whatPeriod2) {
	float income, totIncome;
	
	printf("* INCOME CALCULATOR *\n\n");
	printf("****** %sLY ******\n\n", whatPeriod1);
	printf("**** %d %sS ****\n\n", period, whatPeriod2);
	
	// loop based on period to get income amounts
	for(int i = 1; i <= period; i++) {
		do {
			printf("Income %s %d: ", whatPeriod2, i);
			
			// validate income input and show error if invalid
			if(scanf("%f", &income) != 1 || income <= 0) {
				fflush(stdin);
				printf("\n%s\n", errorMes3);
				getch();
				
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

				// move cursor up 4 lines
				CONSOLE_SCREEN_BUFFER_INFO csbi;
				GetConsoleScreenBufferInfo(hConsole, &csbi);
				COORD cursorPos = { csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y - 4 };
				SetConsoleCursorPosition(hConsole, cursorPos);

				// clear last 4 lines
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
			
		// get valid input (> 0)
		} while (!(income > 0));
		totIncome += income;
	}
	
	// returns the value of totIncome to caller
	return totIncome;
}

// output total & avg income
void displayTotAvg(int period, float totIncome, char *whatPeriod1, char *whatPeriod2) {
	float avgIncome = totIncome / period;
	printf("\n**** RESULTS ****\n");
	printf("\n* TOTAL INCOME WITHIN %d %sS: %.2f\n", period, whatPeriod2, totIncome);
	printf("* AVERAGE %sLY INCOME: %.2f\n\n\n", whatPeriod1, avgIncome);
	printf("------------------------------------------------\n");
	printf("Press any key to continue to the main menu ... ");
	getch();
	system("cls");
}