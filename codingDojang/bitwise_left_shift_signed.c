#include <stdio.h>

int main() {
	char num1 = 113;
	char num2 = -15;
	char num3, num4, num5, num6;

	num3 = num1 << 2;
	num4 = num2 << 2;

	num5 = num1 << 4;
	num6 = num2 << 4;

	printf("%d\n", num3);
	printf("%d\n", num4);

	printf("%d\n", num5);
	printf("%d\n", num6);

	return 0;
}