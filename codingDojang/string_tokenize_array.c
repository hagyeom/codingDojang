// ���ڸ� �������� ���ڿ� �ڸ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " "); // ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

	while (ptr != NULL) {
		printf("%s\n", ptr); // �ڸ� ���ڿ� ���
		ptr = strtok(NULL, " "); // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}

	return 0;
}