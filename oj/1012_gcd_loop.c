#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);

	int small = m < n ? m : n;
	int g = 0;

	for (int j = small; j >= 1; j--)
	{
		if (m % j == 0 && n % j == 0)
		{
			g = j;
			break;
		}
	}

	long long l = (long long)m / g * n;
	printf("%d %lld\n", g, l);

	return 0;
}
