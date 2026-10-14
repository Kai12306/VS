#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* x, int* y);

int main()
{
	//一.
	int arr[] = { 10,20,30,40,50,60 };
	int len = sizeof(arr) / sizeof(int);
	int* p = arr;

	for (int i = 0;i <= 5;i++)
	{
		printf("%d ",*p);
		p++;
	}
	printf("\n");

	//二.
	int a = 100;
	int* p1 = &a;
	int** pp1 = &p1;
	**pp1 = 200;
	printf("%d\n",a);

	//三.
	int b;
	int c;
	scanf("%d%d",&b,&c);
	swap(&b,&c);
	printf("%d %d\n",b,c);

	//四.
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int len1 = sizeof(arr1) / sizeof(int);
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

	for (int i = 0;i <= 6;i++)
	{
		printf("%d ", arr1[i]);

	}
	printf("\n");

	return 0;
}
void swap(int* x, int* y)
{
	int te;
	te = *x;
	*x = *y;
	*y = te;
}
