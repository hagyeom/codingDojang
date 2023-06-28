// 2차원 배열의 모든 요소를 역순으로 출력
#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int col = sizeof(numArr[0]) / sizeof(int); // 2차원 배열의 가로 크기
	int row = sizeof(numArr) / sizeof(numArr[0]); // 2차원 배열의 세로 크기

	for (int i = row - 1; i >= 0; i--) { // 세로 크기 - 1부터 역순으로 반복
		for (int j = col - 1; j >= 0; j--) { // 가로 크기 - 1부터 역순으로 반복
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}