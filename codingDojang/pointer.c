#include <stdio.h>

int main() {
	int* numPtr;
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr); // 포인터 변수 numPtr의 값

	printf("%p\n", &num1); // 변수 num1의 메모리 주소 출력

	return 0;
}