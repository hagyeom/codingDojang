#include <stdio.h>

int main() {
	int* numPtr;
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr); // ������ ���� numPtr�� ��

	printf("%p\n", &num1); // ���� num1�� �޸� �ּ� ���

	return 0;
}