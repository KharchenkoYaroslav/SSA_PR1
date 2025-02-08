#include <stdio.h>
#include <stdint.h>

uint8_t invertBits(uint8_t x, int start, int end){
	if(start < 0|| start > 7 || end < 0||end>7||start>end){
		printf("U idiot");
	}


	for (int i = start; i <= end; i++) {
		x ^= (1 << i);
	}
	return x;
}

void printBinary(uint8_t x) {
	for (int i =7; i>= 0; i--) {
		printf("%d", (x>>i) & 1);
	}
}

int main() {
	uint8_t x;
	int start, end;
	
	printf("enter x(decimal 0-255) ");
	scanf("%hhu", &x);
	
	printf("enter start ");
	scanf("%d", &start);
	
	printf("enter end ");
	scanf("%d", &end);

	uint8_t y = invertBits(x, start, end);
	
	printf("\nx: ");
	printBinary(x);
	printf("\n");
	
	printf("Result: ");
	printBinary(y);
	printf("(decimal: %d)\n", y);

	return 0;
}
