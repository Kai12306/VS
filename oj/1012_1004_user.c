#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	int c = n / 4;
	if (n > 0 && n < 55)
	{
		for (int i = 0; i <= n; i++)
		{
			count++;
		}
		for (int i = 0; i <= c; i++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
