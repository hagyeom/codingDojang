#include <stdio.h>
#include <string.h>

int main() {
	printf("%d\n", strcmp("aaa", "aaa")); // 0: aaa와 aaa는 같으므로 0
	printf("%d\n", strcmp("aab", "aaa")); // 1: aab와 aaa가 크므로 1
	printf("%d\n", strcmp("aab", "aac")); // -1: aab와 aac가 크므로 -1

	return 0;
}