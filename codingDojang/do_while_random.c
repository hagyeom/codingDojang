#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL)); // ���� �ð� ������ �õ� ����

	int i = 0;
	do {
		i = rand() % 10; // rand() �Լ��� ����Ͽ� �������� ������ ������ ��
		// 10 �̸��� ���ڷ� ����
		printf("%d\n", i);
	} while (i != 3);

	return 0;
}