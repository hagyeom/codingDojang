// ���ڿ��� ������ ������ ���ڷ� �˻��ϱ�
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a'); // ���ڿ� ���������� 'a'�� �����ϴ� ���ڿ� �˻�
	// ������ ��ȯ
	printf("%s\n", ptr); // ary

	return 0;
}