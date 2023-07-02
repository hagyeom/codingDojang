#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[10];
	float num1 = 38.972340f;

	sprintf(s1, "%f", num1); // %f를 지정하여 실수를 문자열로 저장

	printf("%s\n", s1);

	return 0;
}