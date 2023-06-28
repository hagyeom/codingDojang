// ���� ��Ʈ���� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    scanf("%d", &size);

    int** matrix = (int**)malloc(size * sizeof(int*));  // �࿡ ���� ������ �迭 ���� �Ҵ�

    // ������� ����
    for (int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));  // ���� ���� �迭 ���� �Ҵ�
        for (int j = 0; j < size; j++) {
            if (i == j)
                matrix[i][j] = 1;  // �ִ밢�� ���Ҵ� 1�� ����
            else
                matrix[i][j] = 0;  // ������ ���Ҵ� 0���� ����
        }
    }

    // ������� ���
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // ���� �Ҵ� ����
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}