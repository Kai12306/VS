#include <stdio.h>
int main()
{
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };

	int *p = arr1;
	int *q = arr1 + 6;

	while (p < q)
	{
		int tem = *p;
		*p = *q;
		*q = tem;

		p++;
		q--;
	}

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	return 0;
}
