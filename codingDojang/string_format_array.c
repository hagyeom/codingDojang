// ������ �����Ͽ� �迭 ���·� ���ڿ� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[20];

	sprintf(s1, "Hello, %s", "world!"); // "Hello, %s"�� ������ �����Ͽ� s1�� ����

	printf("%s\n", s1);

	return 0;
}