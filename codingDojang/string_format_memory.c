// ������ �����Ͽ� ���ڿ� �����Ϳ� ���ڿ� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s1 = malloc(sizeof(char) * 20); // char 20�� ũ�⸸ŭ ���� �޸� �Ҵ�

	sprintf(s1, "Hello, %s", "world!");

	printf("%s\n", s1);

	free(s1);

	return 0;
}