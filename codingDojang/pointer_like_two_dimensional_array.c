#include <stdio.h>
#include <stdlib.h>

int main() {
	int** m = malloc(sizeof(int*) * 3); /* ���� �����Ϳ� (int ������ ũ�� * ���� ũ��)
	��ŭ ���� �޸� �Ҵ�. �迭�� ���� */

	for (int i = 0; i < 3; i++) {
		m[i] = malloc(sizeof(int) * 4); /* (int ũ�� * ���� ũ��)��ŭ ���� �޸� �Ҵ�.
		�迭�� ���� */
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);

	for (int i = 0; i < 3; i++) { // ���� ũ�⸸ŭ �ݺ�
		free(m[i]); // 2���� �迭�� ���� ���� �޸� ����
	}

	free(m); // 2���� �迭�� ���� ���� �޸� ����

	return 0;
}