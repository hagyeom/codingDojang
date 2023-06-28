// 지뢰찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    // 행렬 동적 할당
    char** matrix = (char**)malloc(m * sizeof(char*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (char*)malloc((n + 1) * sizeof(char));
        scanf("%s", matrix[i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '.') {
                int count = 0;
                // 상하좌우 및 대각선 방향으로 인접한 지뢰 개수 세기
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int newRow = i + x;
                        int newCol = j + y;
                        // 인접한 위치가 행렬 범위 내에 있고 해당 위치가 지뢰인 경우
                        if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && matrix[newRow][newCol] == '*') {
                            count++;
                        }
                    }
                }
                // 현재 위치가 지뢰가 아닌 경우 인접한 지뢰의 개수 출력
                printf("%d", count);
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    // 동적 할당 해제
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
