#include <stdio.h>

int main() {
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };

	int* numPtr = numArr;

	printf("%d\n", *numPtr); // �迭�� ù ��° ��ҿ� ����
	printf("%d\n", *numArr); // �迭�� ù ��° ��ҿ� ����
	printf("%d\n", numPtr[5]);
	printf("%d\n", sizeof(numArr)); 
	printf("%d\n", sizeof(numPtr)); /* 4 : sizeof�� �迭�� �ּҰ� ����ִ� �������� 
	ũ�⸦ ���ϸ� �������� ũ�Ⱑ ��µ�(64��Ʈ��� 8) */
	return 0;

}