#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int contains(int arr[], int len, int num);

int main()
{
//需求:
//生成10个1~100之间的随机数，存入数组,要求数据不能重复
//1.求出所有数据的和
//2.求出所有数据的平均数
//3.统计有多少个数据比平均值小。

	int arr[10] = { 0 };

	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
	
	int sum = 0;

	for (int i=0;i<len;)
	{
		int num = rand() % 100 + 1;
		int flag =contains(arr, len, num);
		if (!flag)
			//也可以直接取反
		{
			arr[i] = num;
			sum = sum + arr[i];
			i++;
		}

	}

	for (int j = 0; j < len; j++)
	{
		printf("%d\n", arr[j]);
	}

	printf("总值为%d\n", sum);

	for (int i = 0; i < len; i++)      
	{
		printf("%d\n", arr[i]);
	}


	double num1 = (double)sum / len;   // 把 sum 强转成 double
	printf("这些数的平均值位%lf\n",num1);

	printf("\n");

	int count = 0;

	for (int i=0;i<len;i++)
	{
		if (num1 > arr[i])
		{
			count++;
		}
	}
	printf("有%d个数据比平均值小\n",count);

	return 0;
}

// 判断 num 在函数中是否存在
// 存在    返回1
// 不存在  返回0

int contains(int arr[], int len, int num)
{
	for (int i = 0;i < len;i++)
	{
		//以此表示数组里的每一个索引
		//arr:依次表达数组里的每一个数据
		if (arr[i] == num)
		{
			return 1;
		}
	}
	return 0;
}


