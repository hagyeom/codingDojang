#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s1 = "0xaf10 42 0x27c 9952";
	int num1;
	int num2;
	int num3;
	int num4;
	char* end; // 이전 숫자의 끝부분을 저장하기 위한 포인터

	num1 = strtol(s1, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = strtol(end, &end, 16);
	num4 = strtol(end, NULL, 10);

	printf("%x\n", num1);
	printf("%d\n", num2);
	printf("%x\n", num3);
	printf("%d\n", num4);

	return 0;
}