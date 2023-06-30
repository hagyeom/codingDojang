#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30], s2[30];
	scanf("%s %s", s1, s2);
	int ret = strcmp(s1, s2);
	printf("%d\n", ret);
	return 0;
}