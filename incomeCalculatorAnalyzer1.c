/*
 * This is a comprehensive source code for our final project in CCS102.

 * INCOME CALCULATOR/ANALYZER - This program provides a user-friendly interface for calculating and analyzing daily, weekly, monthly, and yearly income.
       Users can select the desired time frame and input the necessary information, and the program will automatically calculate and display the 
	   total amount, average, and other relevant statistics. This valuable data can help users track their income patterns, identify trends, and make 
	   informed financial decisions. 

 * LOMARDA, Ismael Marlon
 * SUBRIO, Charryl
 * TORAJA, Herro

 * Date: November 11, 2023
 */


#include <stdio.h>

int main() {
	
	int choice; 
	
	printf("INCOME CALCULATOR/ANALYZER\n\n");
	
	printf("1. Calculate Daily Income\n");
	printf("2. Calculate Weekly Income\n");
	printf("3. Calculate Monthly Income\n");
	printf("4. Calculate Yearly Income\n");
	printf("5. Exit\n");
	
	printf("\nInput your choice: ");
	scanf("%d", &choice);

	return 0;
}