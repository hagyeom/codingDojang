#include <stdio.h>
#include <stdbool.h>

int main() {
	int num1 = 0;

	bool exitOuterLoop = false; // 바깥쪽 루프를 빠져나올지 결정하는 변수
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {
				exitOuterLoop = true; // 바깥쪽 루프도 빠져나가겠음
				break;
			}
			num1++;
		}
		if (exitOuterLoop == true)
			break;
	}
	printf("%d\n", num1);

	return 0;
}