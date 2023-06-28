// 반복문으로 2차원 배열의 요소 모두 출력
#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);
	for (int i = 0; i < row; i++) { // 2차원 배열의 세로 크기만큼 반복
		for (int j = 0; j < col; j++) { // 2차원 배열의 가로 크기만큼 반복
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}