#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[10];
	int num1 = 283;

	sprintf(s1, "%d", num1); // %d를 지정하여 정수를 문자열로 저장

	printf("%s\n", s1);

	return 0;
}