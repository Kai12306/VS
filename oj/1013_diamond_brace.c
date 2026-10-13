
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	for (int i = 1; i <= 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("%c", c);
		}
		printf("\n");
	}

	for (int i = 2; i >= 1; i--) {
		for (int j = 0; j < 3 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}
