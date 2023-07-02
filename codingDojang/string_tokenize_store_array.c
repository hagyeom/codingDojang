#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, }; /* 크기가 10인 문자열 포인터 배열을 선언하고 
	NULL로 초기화 */

	int i = 0; // 문자열 포인터 배열의 인덱스로 사용할 변수

	char* ptr = strtok(s1, " "); // 공백 문자열을 기준으로 문자열을 자름

	while (ptr != NULL) {
		sArr[i] = ptr; // 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 저장
		i++; // 인덱스 증가

		ptr = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
	}

	for (int i = 0; i < 10; i++) {
		if (sArr[i] != NULL) // 문자열 포인터 배열의 요소가 NULL이 아닐 때만
			printf("%s\n", sArr[i]); // 문자열 포인터 배열에 인덱스로 접근하여
		// 각 문자열 출력
	}

	return 0;
}