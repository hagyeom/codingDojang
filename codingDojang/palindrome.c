// 회문 판별
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char word[30]; // 단어를 저장할 배열
	int length; // 문자열 길이
	bool isPalindrome = true; // 회문 판별 값을 저장할 변수, 초깃값은 true

	printf("단어를 입력하세요: ");
	scanf("%s", word);

	length = strlen(word); // 문자열의 길이를 구함

	// 0부터 문자열 길이의 절반만큼 반복
	for (int i = 0; i < length / 2; i++) {
		// 왼쪽 문자와 오른족 문자를 비교하여 문자가 다르면
		if (word[i] != word[length - 1 - i]) {
			// 회문이 아님
			isPalindrome = false;
			break;
		}
	}

	printf("%d\n", isPalindrome); // 회문 판별 값 출력
	// 회문이면 1 출력, 회문이 아니면 0 출력
	return 0;
}