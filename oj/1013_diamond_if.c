#include<stdio.h>
int main()
{
	char c;
	scanf("%c", &c);

	/* one loop for all 5 rows, one if decides upper / lower half */
	for (int i = 1; i <= 5; i++) {
		int num;
		if (i <= 3) {
			num = 2 * i - 1;         /* upper half, including the center row */
		} else {
			num = 2 * (6 - i) - 1;   /* lower half: i=4 acts like 2, i=5 acts like 1 */
		}
		int sp = (5 - num) / 2;
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
