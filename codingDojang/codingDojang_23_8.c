// C언어 코딩도장 unit 23.8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int num1;
	unsigned int num2;

	scanf("%u %u", &num1, &num2);

	printf("%u\n", num1 ^ num2);
	printf("%u\n", num1 | num2);
	printf("%u\n", num1 & num2);

	num2 = ~num1;
	printf("%u\n", num2);

	return 0;
}