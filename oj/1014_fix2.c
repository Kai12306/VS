#include <stdio.h>
int main()
{
	int arr1[7] = { 1,2,3,4,5,6,7 };
	int *p = arr1;
	int *q = arr1 + 7;
	printf("start: p=%d q=%d\n", *p, *q);
	return 0;
}
