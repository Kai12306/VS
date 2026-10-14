#include <stdio.h>
int main()
{
	int arr[6] = { 10,20,30,40,50,60 };
	int *p = arr;
	int x = *arr[p];
	printf("%d\n", x);
	return 0;
}
