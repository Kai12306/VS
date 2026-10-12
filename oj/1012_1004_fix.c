#include <stdio.h>

int main()
{
	int n;
	int f[60];

	f[1] = 1;
	f[2] = 2;
	f[3] = 3;

	for (int i = 4; i < 55; i++)
	{
		f[i] = f[i - 1] + f[i - 3];
	}

	while (scanf("%d", &n) == 1)
	{
		if (n == 0)
		{
			break;
		}
		printf("%d\n", f[n]);
	}

	return 0;
}
