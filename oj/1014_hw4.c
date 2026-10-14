#include <stdio.h>
int main()
{
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int len1 = sizeof(arr1) / sizeof(int);
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

	printf("loop end: x is at index %d, y is at index %d\n", (int)(x - arr1), (int)(y - arr1));
	printf("array is now: ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("his print loop: ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", *x);
	}
	printf("\n");
	return 0;
}
