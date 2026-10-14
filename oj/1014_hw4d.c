#include <stdio.h>
int main()
{
	int arr[] = { 10,20,30,40,50,60 };
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };

	int* e = arr1;
	int* f = arr1 + 6;
	while (e < f)
	{
		int ter = *e;
		*e = *f;
		*f = ter;
		e++;
		f--;
	}

	printf("printf(\"%%d \", arr)     : ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", arr);
	}
	printf("\n");

	printf("printf(\"%%d \", arr[i])   : ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("printf(\"%%d \", arr1[i])  : ");
	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	return 0;
}
