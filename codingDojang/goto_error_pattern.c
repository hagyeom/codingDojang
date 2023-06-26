#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int gender; // 성별: 남자 1, 여자 2
	int age; // 나이
	int isOwner; // 주택 소유 여부: 자가 1, 전월세 2

	scanf("%d %d %d", &gender, &age, &isOwner);

	printf("안녕하세요.\n");
	printf("문을 연다.\n");

	if (gender == 2)
		goto EXIT;
	if (age < 30)
		goto EXIT;
	if (isOwner == 0)
		goto EXIT;
EXIT:
	printf("안녕히계세요.\n");
	printf("문을 닫는다.\n");

	return 0;
}