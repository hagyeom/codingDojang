#include <stdio.h>
#include <stdlib.h>

int main() {
	int* numPtr;

	numPtr = malloc(sizeof(int));

	*numPtr = 10; // �����͸� �������� �� �� �Ҵ�

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}