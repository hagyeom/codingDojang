// 서식을 지정하여 문자열 포인터에 문자열 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s1 = malloc(sizeof(char) * 20); // char 20개 크기만큼 동적 메모리 할당

	sprintf(s1, "Hello, %s", "world!");

	printf("%s\n", s1);

	free(s1);

	return 0;
}