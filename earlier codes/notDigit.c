#include <stdio.h>

int main() {
	int period;
	scanf("%d", &period);
	if(isdigit(period) != 0) {
		printf("invalid");
	}
}