#include <stdio.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
	int income;
    printf("INCOME CALCULATOR\n\n");
    printf("**** Yearly ****\n\n");

    scanf("%d", &income);
    
    printf("Press Enter to continue ");
    clearInputBuffer();
    
    return 0;
}
