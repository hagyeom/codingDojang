#include <stdio.h>

int main() {
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };

	int* numPtr = numArr;

	printf("%d\n", *numPtr); // 배열의 첫 번째 요소에 접근
	printf("%d\n", *numArr); // 배열의 첫 번째 요소에 접근
	printf("%d\n", numPtr[5]);
	printf("%d\n", sizeof(numArr)); 
	printf("%d\n", sizeof(numPtr)); /* 4 : sizeof로 배열의 주소가 들어있는 포인터의 
	크기를 구하면 포인터의 크기가 출력됨(64비트라면 8) */
	return 0;

}