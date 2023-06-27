#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	long long* numPtr = malloc(sizeof(long long)); // 8바이트만큼 동적 메모리 할당

	memset(numPtr, 0x27, 8); // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;

}