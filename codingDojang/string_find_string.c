// ���ڿ� �ȿ��� ���ڿ��� �˻��ϱ�
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "A Garden Diary";

	char* ptr = strstr(s1, "den"); // den���� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

	printf("%s\n", ptr); // den Diary

	return 0;
}