#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; // 입력된 문자열을 저장할 배열
    int spaceCount = 0; // 공백의 개수를 저장할 변수

    // 문자열 입력
    scanf("%[^\n]s", str);

    // 공백 개수 계산
    char* ptr = strchr(str, ' ');
    while (ptr != NULL) {
        spaceCount++;
        ptr = strchr(ptr + 1, ' ');
    }

    // 공백 개수 출력
    printf("%d\n", spaceCount);

    return 0;
}
