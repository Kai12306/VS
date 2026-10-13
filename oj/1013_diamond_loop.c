#include<stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	for (int i = 1; i <= 3; i++) {
		int sp = 3 - i;
		int num = 2 * i - 1;
		for (int j = 0; j < sp; j++) {
			printf(" ");
		}
		for (int j = 0; j < num; j++) {
			printf("%c", c);
		}
		printf("\n");
	}

	for (int i = 2; i >= 1; i--) {
		int sp = 3 - i;
		int num = 2 * i - 1;
		for (int j = 0; j < sp; j++) {
			printf(" ");
		}
		for (int j = 0; j < num; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}
