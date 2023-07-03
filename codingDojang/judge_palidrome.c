#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[31]; // 31 크기 문자열을 담을 배열 선언
    int len; // 문자열의 길이를 담을 변수

    scanf("%[^\n]s", a); // 공백을 포함해서 문자열 입력
    len = strlen(a); // 문자열 길이 구하기

    int isPalin = 1; // 회문 판별 flag
    for (int i = 0, j = len - 1; i < j; i++, j--) { // i, j를 둘다 선언 후 len/2 만큼 반복
        while (a[i] == ' ') // a[i]가 공백이면 i + 1
            i++;
        while (a[j] == ' ') // a[j]가 공백이면 j - 1
            j--;
        if (a[i] != a[j]) { // a[i] a[j]가 같지 않으면 isPalin을 0으로 만들고 반복 종료
            isPalin = 0;
            break;
        }
    }

    printf("%d", isPalin); // isPalin 출력

    return 0;
}