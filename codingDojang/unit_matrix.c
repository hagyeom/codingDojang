// 단위 매트릭스 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    scanf("%d", &size);

    int** matrix = (int**)malloc(size * sizeof(int*));  // 행에 대한 포인터 배열 동적 할당

    // 단위행렬 생성
    for (int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));  // 열에 대한 배열 동적 할당
        for (int j = 0; j < size; j++) {
            if (i == j)
                matrix[i][j] = 1;  // 주대각선 원소는 1로 설정
            else
                matrix[i][j] = 0;  // 나머지 원소는 0으로 설정
        }
    }

    // 단위행렬 출력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 동적 할당 해제
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}