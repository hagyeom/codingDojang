#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr); /* 2���� �迭 �����͸� �������ϸ� 
	���� ù ��°�� �ּҰ� ���� */
	printf("%p\n", *numArr); /* 2���� �迭�� �������ϸ� 
	���� ù ��°�� �ּҰ� ���� */
	printf("%d\n", numPtr[2][1]);
	printf("%d\n", sizeof(numArr)); /* 48: sizeof�� 2���� �迭�� ũ�⸦ ���ϸ�
	�迭�� �޸𸮿� �����ϴ� ������ ��µ� */ 
	printf("%d\n", sizeof(numPtr)); /* 4: sizeof�� 2���� �迭 �������� ũ�⸦ 
	���ϸ� �������� ũ�Ⱑ ��µ�(64��Ʈ��� 8) */

	return 0;
}