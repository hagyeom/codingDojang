#include <stdio.h>
#include <string.h>

int main() {
	char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

	char* ptr = strstr(s1, "den"); // den으로 시작하는 문자열 검색, 포인터 반환

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strstr(ptr + 1, "den");
	}

	return 0;
}