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

// declarations of constant error messages (checked) 
#define errorMes1 "Invalid option value. Please check out the valid options above.\nPress any key to re-choose ... "
#define errorMes2 "Invalid period value. Please enter a whole number greater than 1.\nPress any key to re-enter ... "
#define errorMes3 "Invalid amount value. Income amounts must be greater than 0.\nPress any key to re-input ... "
#define credits "Programmers:\n\nSUBRIO, CHARRYL\nLOMARDA, ISMAEL MARLON\nTORAJA, HERRO\n\n"

// functions declaration (checked)
int getPeriod(char *, char *);
float getIncomes(int, char *, char *);
void displayTotAvg(int, float, char *, char *);

main() {
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

			// asks the user to choose an option (checked)
			printf("\nPress an option ... ");
			option = getch();
			option = toupper(option);
			printf("%c\n\n", option);
			
			// validates the user's chosen option and prints an error message if the user presses an invalid value (checked)
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
			
		// repeatedly asks the user to choose an option until the user presses a valid option (checked)
		} while(option != 'D' && option != 'W' && option != 'M' && option != 'Y' && option != 'Q');
		
		// determines which block of codes to execute based on the user's chosen option (checked)
		switch(option) {
			
			// assigns "DAY" as the name of the period (checked)
			case 'D':
				strcpy(periodName1, periods[0]);
				strcpy(periodName2, periods[1]);
				break;
				
			// assigns "WEEK" as the name of the period (checked)	
			case 'W':
				strcpy(periodName1, periods[2]);
				strcpy(periodName2, periods[2]);
				break;
				
			// assigns "MONTH" as the name of the period (checked)	
			case 'M':
				strcpy(periodName1, periods[3]);
				strcpy(periodName2, periods[3]);
				break;
				
			// assigns "YEAR" as the name of the period (checked)	
			case 'Y':
				strcpy(periodName1, periods[4]);
				strcpy(periodName2, periods[4]);
				break;
				
			// display credits before the program exits (checked)
			case 'Q':
				printf("Thank you for using INCOME CALCULATOR! Until next time!\n\n");
				printf("%shttps://github.com/charrylsubrio/incomeCalculator/\n", credits);
				break;
		}
		
		if(option != 'Q') {
			
			// calls the getPeriod function and passes the value of periodName (checked)
			period = getPeriod(periodName1, periodName2);
			
			// calls the getIncome function and passes the value of period and periodName (checked)
			totIncome = getIncomes(period, periodName1, periodName2);
			
			// calls the displayTotAvg function and passes the value of period, totIncome, and periodName (checked)
			displayTotAvg(period, totIncome, periodName1, periodName2);
		}
	
	// repeatedly displays the main menu until the user chooses option Q (checked)	 
	} while (option != 'Q');
}

// function definitions (checked)

// function to ask the user to enter the value of period (checked)
int getPeriod(char *whatPeriod1, char *whatPeriod2) {
	int period;

	do {
		printf("* INCOME CALCULATOR *\n\n");
		printf("****** %sLY ******\n\n", whatPeriod1);
		printf("Number of %sS: ", whatPeriod2);
		
		// scans and validates the inputted number and displays an error message if the user entered an invalid value (checked)
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
		
	// repeatedly ask for an input until the user enters a whole number greater than 1 (checked)
	} while (!(period > 1));

	system("cls");
	
	// returns the value of period to the function caller (checked)
	return period;
}

// function to ask the user to input income amounts (checked)  
float getIncomes(int period, char *whatPeriod1, char *whatPeriod2) {
	float income, totIncome;
	
	printf("* INCOME CALCULATOR *\n\n");
	printf("****** %sLY ******\n\n", whatPeriod1);
	printf("**** %d %sS ****\n\n", period, whatPeriod2);
	
	// uses the value of period to determine how many times the user is asked to input amounts (checked) 
	for(int i = 1; i <= period; i++) {
		do {
			printf("Income %s %d: ", whatPeriod2, i);
			
			// validates the value of the income and displays an error message if the user inputs an invalid value (checked)
			if(scanf("%f", &income) != 1 || income <= 0) {
				fflush(stdin);
				printf("\n%s\n", errorMes3);
				getch();
				
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

				// move the cursor up four lines (checked)
				CONSOLE_SCREEN_BUFFER_INFO csbi;
				GetConsoleScreenBufferInfo(hConsole, &csbi);
				COORD cursorPos = { csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y - 4 };
				SetConsoleCursorPosition(hConsole, cursorPos);

				// clear the last four lines (checked)
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
			
		// repeatedly ask for an input until the user enters a number greater than 0 (checked)
		} while (!(income > 0));
		totIncome += income;
	}
	
	// returns the value of totIncome to the function caller (checked)
	return totIncome;
}

// function to display the computed total income and the average income (checked)
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