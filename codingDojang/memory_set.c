#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	long long* numPtr = malloc(sizeof(long long)); // 8����Ʈ��ŭ ���� �޸� �Ҵ�

	memset(numPtr, 0x27, 8); // numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;

}