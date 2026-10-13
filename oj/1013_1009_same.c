
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int count = a;

	int c1 = count % 10;
	int c2 = count % 100 / 10;
	int c3 = count % 1000 / 10;
	int c4 = count % 10000 / 1000;
	int c5 = count / 10000;

	printf("%d %d %d %d %d\n", c5, c4, c3, c2, c1);
	printf("%d\n", c1 * 10000 + c2 * 1000 + c3 * 100 + c2 * 10 + c5);
	return 0;
}
