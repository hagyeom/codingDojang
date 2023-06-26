#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int height;
	scanf("%d", &height);

	for (int i = 0; i < height; i++) {
		for (int j = height - 1; j >= 0; j--) {
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		for (int j = 0; j < height - 1; j++) {
			if (j < i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}