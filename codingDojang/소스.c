#include <stdio.h>

int main() {
	unsigned char num1 = 2;
	unsigned char num2;
	num2 = num1 << 14;

	printf("%u\n", num2);

	return 0;
}