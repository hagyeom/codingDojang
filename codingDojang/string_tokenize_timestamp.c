// ��¥�� �ð� �� �ڸ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "2015-06-10T15:32:19";

	char* ptr = strtok(s1, "-T:"); // -, T, �ݷ��� �������� ���ڿ��� �ڸ�. ������ ��ȯ

	while (ptr != NULL) {
		printf("%s\n", ptr); // �ڸ� ���ڿ� ���
		ptr = strtok(NULL, "-T:"); // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}

	return 0;
}