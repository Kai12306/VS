#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}


	int ge = n % 10;
	int shi = n / 10 % 10;
	int bai = n / 100;


	int t = n, rev = 0;
	while (t > 0)
	{
		rev = rev * 10 + t % 10;
		t /= 10;
	}


	int max = a[0];
	for (int i = 1;i < n;i++)
	if (a[i] > max)
	max = a[i];
	 

	int* e = a;
	int* f = a + n - 1;
	while (e < f)
	{
		int t = *e;
		*e = *f;
		*f = t;

		e++;
		f--;
	}


	return 0;
}









