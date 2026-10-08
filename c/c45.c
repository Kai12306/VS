#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
//  需求:
//	生成10个1~100之间的随机数，存入数组
//	求出所有数据的和


//1.定义数组:
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	srand(time(NULL));

	
	for (int i = 0;i < len; i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
	}



	for (int i = 0;i < len; i++)
	{
		printf("%d\n",arr[i]);
	}

	printf("\n");

	int sum = 0;

	for (int i = 0;i < len; i++)
	{
		sum = sum + arr[i];
	}

	printf("%d\n", sum);

	//可以把三个循环并在一起,直接无敌

	printf("\n");

	int sum1 = 0;

	for (int i = 0;i < len; i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
		printf("%d\n", arr[i]);
		sum1 = sum1 + arr[i];
	}

	printf("%d\n", sum1);


	return 0;
}




