// 문자열 포인터 자르기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* s1 = malloc(sizeof(char) * 30); // char 30개 크기만큼 동적 메모리 할당

	strcpy(s1, "The Little Prince"); // s1에 문자열 복사

	char* ptr = strtok(s1, " "); // 동적 메모리에 들어있는 문자열은 자를 수 있음

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	free(s1);

	return 0;
}