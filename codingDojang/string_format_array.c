// 서식을 지정하여 배열 형태로 문자열 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[20];

	sprintf(s1, "Hello, %s", "world!"); // "Hello, %s"로 서식을 지정하여 s1에 저장

	printf("%s\n", s1);

	return 0;
}