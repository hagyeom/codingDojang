#include <stdio.h>
#include <string.h>

int main() {
	printf("%d\n", strcmp("aaa", "aaa")); // 0: aaa�� aaa�� �����Ƿ� 0
	printf("%d\n", strcmp("aab", "aaa")); // 1: aab�� aaa�� ũ�Ƿ� 1
	printf("%d\n", strcmp("aab", "aac")); // -1: aab�� aac�� ũ�Ƿ� -1

	return 0;
}