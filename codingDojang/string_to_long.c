// Ư�� �������� ǥ��� ���ڿ��� ������ ��ȯ�ϱ�
#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16); // 16�������� ǥ��� ���ڿ��� ������ ��ȯ

	printf("%x %d\n", num1, num1);

	return 0;
}