// 날짜와 시간 값 자르기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "2015-06-10T15:32:19";

	char* ptr = strtok(s1, "-T:"); // -, T, 콜론을 기준으로 문자열을 자름. 포인터 반환

	while (ptr != NULL) {
		printf("%s\n", ptr); // 자른 문자열 출력
		ptr = strtok(NULL, "-T:"); // 다음 문자열을 잘라서 포인터를 반환
	}

	return 0;
}