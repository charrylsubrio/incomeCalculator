#include <stdio.h>
#include <ctype.h>

main() {
	int income;
	
	printf("Enter income: ");
	//scanf("%f", &income);
	
	if(scanf("%f", &income) != 1) {
		printf("Alphabet!");
	}

	
}