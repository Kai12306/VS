#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n3;
	scanf("%d", &n3);
	if (6 < n3 && n3 < 109)
	{
		for (int i = 2;i * i < n3;i++)
		{
			if (n3 % i != 0)
			{
				printf("%d\n", i);
			}
		}
		return 0;
	}
}