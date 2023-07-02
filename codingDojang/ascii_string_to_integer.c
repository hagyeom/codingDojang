// 문자열을 정수로 변환하기
#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s1 = "283";
	int num1;
	num1 = atoi(s1); // 문자열을 정수로 변환하여 num1에 할당

	printf("%d\n", num1);

	return 0;
}