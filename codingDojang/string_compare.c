#include <stdio.h>
#include <string.h>

int main() {
	char s1[10] = "Hello";
	char* s2 = "Hello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret); // 0: 두 문자열이 같으면 0

	return 0;
}