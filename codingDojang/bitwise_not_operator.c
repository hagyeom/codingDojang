// C언어 코딩도장 unit 23.2
#include <stdio.h>

int main() {
	unsigned char num1 = 162; // 162: 1010 0010
	unsigned char num2;

	num2 = ~num1; // ~ : 비트 NOT 연산자(0은 1로 1은 0으로 바꾼다.)

	printf("%u\n", num2); // 93: 0101 1101: num1의 비트 값을 뒤집음

	return 0;
}