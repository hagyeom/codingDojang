#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number;
	char name[31], result[40];

	scanf("%d %s", &number, name);

	switch (number)
	{
	case 1:
		sprintf(result, "%dst %s", number, name);
		break;
	case 2:
		sprintf(result, "%dnd %s", number, name);
		break;
	case 3:
		sprintf(result, "%drd %s", number, name);
		break;
	case 4:
		sprintf(result, "%dth %s", number, name);
		break;
	case 5:
		sprintf(result, "%dth %s", number, name);
		break;
	case 6:
		sprintf(result, "%dth %s", number, name);
		break;
	case 7:
		sprintf(result, "%dth %s", number, name);
		break;
	default:
		break;
	}

	printf("%s\n", result);

	return 0;
}