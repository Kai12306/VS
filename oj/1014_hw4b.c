#include <stdio.h>
int main()
{
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int* x = arr1;
	int* y = arr1 + 6;

	while (x < y)
	{
		int ter = *x;
		*x = *y;
		*y = ter;
		x++;
		y--;
	}

	printf("after loop, x is at index %d\n", (int)(x - arr1));
	printf("array now  : ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("his print  : ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", *x);
	}
	printf("\n");
	return 0;
}
