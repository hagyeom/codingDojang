#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[31]; // 31 ũ�� ���ڿ��� ���� �迭 ����
    int len; // ���ڿ��� ���̸� ���� ����

    scanf("%[^\n]s", a); // ������ �����ؼ� ���ڿ� �Է�
    len = strlen(a); // ���ڿ� ���� ���ϱ�

    int isPalin = 1; // ȸ�� �Ǻ� flag
    for (int i = 0, j = len - 1; i < j; i++, j--) { // i, j�� �Ѵ� ���� �� len/2 ��ŭ �ݺ�
        while (a[i] == ' ') // a[i]�� �����̸� i + 1
            i++;
        while (a[j] == ' ') // a[j]�� �����̸� j - 1
            j--;
        if (a[i] != a[j]) { // a[i] a[j]�� ���� ������ isPalin�� 0���� ����� �ݺ� ����
            isPalin = 0;
            break;
        }
    }

    printf("%d", isPalin); // isPalin ���

    return 0;
}