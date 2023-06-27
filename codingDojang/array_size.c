#include <stdio.h>

int main() {
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };

	printf("%d\n", sizeof(numArr)); // 배열이 차지하는 전체 공간
	printf("%d\n", sizeof(numArr)/sizeof(int)); // 배열의 크기(요소 개수)

	return 0;
}