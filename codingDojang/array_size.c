#include <stdio.h>

int main() {
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };

	printf("%d\n", sizeof(numArr)); // �迭�� �����ϴ� ��ü ����
	printf("%d\n", sizeof(numArr)/sizeof(int)); // �迭�� ũ��(��� ����)

	return 0;
}