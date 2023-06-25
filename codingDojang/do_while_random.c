#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL)); // 현재 시간 값으로 시드 설정

	int i = 0;
	do {
		i = rand() % 10; // rand() 함수를 사용하여 무작위로 정수를 생성한 뒤
		// 10 미만의 숫자로 만듦
		printf("%d\n", i);
	} while (i != 3);

	return 0;
}