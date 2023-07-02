// 문자를 기준으로 문자열 자르기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " "); // 공백 문자를 기준으로 문자열을 자름, 포인터 반환

	while (ptr != NULL) {
		printf("%s\n", ptr); // 자른 문자열 출력
		ptr = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
	}

	return 0;
}