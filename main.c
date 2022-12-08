#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = i; j <= 5 - 1; j++) {
			printf("S");
		}
		printf("\n");
	}
	return 0;
}
