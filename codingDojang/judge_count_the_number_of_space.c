#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; // �Էµ� ���ڿ��� ������ �迭
    int spaceCount = 0; // ������ ������ ������ ����

    // ���ڿ� �Է�
    scanf("%[^\n]s", str);

    // ���� ���� ���
    char* ptr = strchr(str, ' ');
    while (ptr != NULL) {
        spaceCount++;
        ptr = strchr(ptr + 1, ' ');
    }

    // ���� ���� ���
    printf("%d\n", spaceCount);

    return 0;
}
