// 문자열의 오른쪽 끝부터 문자로 검색하기
#include <stdio.h>
#include <string.h>

int main() {
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a'); // 문자열 끝에서부터 'a'로 시작하는 문자열 검색
	// 포인터 반환
	printf("%s\n", ptr); // ary

	return 0;
}