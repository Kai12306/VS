#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


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

	for (int i=1;i<len;i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
		printf("%d\n",arr[i]);
		sum = sum + arr[i];
	}

	printf("%d\n", sum);


	int num = sum / len;

	int count = 0;

	/*if (num>arr[i])
	{
		count++;
	}*/

	printf("有%d个数据比平均值小\n",count);

	return 0;
}







