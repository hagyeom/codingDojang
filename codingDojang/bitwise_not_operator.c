// C��� �ڵ����� unit 23.2
#include <stdio.h>

int main() {
	unsigned char num1 = 162; // 162: 1010 0010
	unsigned char num2;

	num2 = ~num1; // ~ : ��Ʈ NOT ������(0�� 1�� 1�� 0���� �ٲ۴�.)

	printf("%u\n", num2); // 93: 0101 1101: num1�� ��Ʈ ���� ������

	return 0;
}