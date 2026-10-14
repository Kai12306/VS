#include <stdio.h>
int main()
{
	int arr[] = { 10,20,30,40,50,60 };

	int *p = arr;
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	return 0;
}
