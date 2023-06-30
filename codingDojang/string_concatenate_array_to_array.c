// 문자열 붙이기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[10] = "world";
	char s2[20] = "Hello";

	strcat(s2, s1); // s2 뒤에 s1을 붙임

	printf("%s\n", s2);

	return 0;
}