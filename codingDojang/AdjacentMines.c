// ����ã��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    // ��� ���� �Ҵ�
    char** matrix = (char**)malloc(m * sizeof(char*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (char*)malloc((n + 1) * sizeof(char));
        scanf("%s", matrix[i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '.') {
                int count = 0;
                // �����¿� �� �밢�� �������� ������ ���� ���� ����
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int newRow = i + x;
                        int newCol = j + y;
                        // ������ ��ġ�� ��� ���� ���� �ְ� �ش� ��ġ�� ������ ���
                        if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && matrix[newRow][newCol] == '*') {
                            count++;
                        }
                    }
                }
                // ���� ��ġ�� ���ڰ� �ƴ� ��� ������ ������ ���� ���
                printf("%d", count);
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    // ���� �Ҵ� ����
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
