#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[10];
	int num1 = 283;

	sprintf(s1, "0x%x", num1); // %x�� �����Ͽ� ������ 16�������� ǥ��� ���ڿ��� ����
	// 16������� ���� ��Ÿ���� ���� �տ� 0x�� ����

	printf("%s\n", s1);

	return 0;
}