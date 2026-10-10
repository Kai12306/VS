#include<stdio.h>

void Getmaxandmin(int arr[], int len, int* max, int* min);

int main()
{
	//作用2:函数返回多个值

	//定义一个数组,求数组的最大值和最小值,并进行返回

	int arr[] = { 13,4,5,3,6,7,8,9,4,212,10086 };
	int len = sizeof(arr) / sizeof(int);

	int max = arr[0];
	int min = arr[0];

	Getmaxandmin(arr, len, &max, &min);

	printf("数组中最小的数:%d\n", min);
	printf("数组中最大的数:%d\n", max);



	return 0;
}

void Getmaxandmin(int arr[], int len,int*max,int*min)
{
	*max = arr[0];
	for (int i = 0;i < len;i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}

	*min = arr[0];
	for (int i = 0;i < len;i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}
















