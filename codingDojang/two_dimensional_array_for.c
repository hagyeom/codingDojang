// �ݺ������� 2���� �迭�� ��� ��� ���
#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);
	for (int i = 0; i < row; i++) { // 2���� �迭�� ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < col; j++) { // 2���� �迭�� ���� ũ�⸸ŭ �ݺ�
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}