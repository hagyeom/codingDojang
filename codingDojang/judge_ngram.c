#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char input[11];
    scanf("%d %s", &n, input);

    int length = strlen(input);

    if (length < n) {
        printf("wrong\n");
    }
    else {
        for (int i = 0; i <= length - n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%c", input[i + j]);
            }
            printf("\n");
        }
    }

    return 0;
}
