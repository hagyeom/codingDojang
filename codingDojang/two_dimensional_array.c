#include <stdio.h>

int main() {
	int numArr[3][4] = { // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언 
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d\n", numArr[2][3]);

	return 0;
}