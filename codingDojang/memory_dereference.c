#include <stdio.h>
#include <stdlib.h>

int main() {
	int* numPtr;

	numPtr = malloc(sizeof(int));

	*numPtr = 10; // 포인터를 역참조한 뒤 값 할당

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}