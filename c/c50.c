#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void printArr(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main()
{
	//打乱数组的数据
	//需求:定义一个数组,存入1~5;
	//要求打乱

	//遍历:
	//写法:
	/*
	int arr[5] = { 1,2,3,4,5 };

	for (int i= 0;i < 5;i++);
	{
		printf("%d\n",arr[i]);
	}
	*/

	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);

	//设种子:整个程序只调一次!
	//time(NULL) 只精确到秒,同一秒内跑多次结果会完全一样
	//用 time ^ GetTickCount 混合,才能做到每次都不一样(开机毫秒数)
	srand((unsigned int)(time(NULL) ^ (unsigned int)GetTickCount()));

	//重要:打乱数组必须倒序洗牌(Fisher-Yates)
	//      正序洗的话,前面换好的位置会被后面的 i 又换回去,概率不均匀
	for (int i = len - 1; i > 0; i--)
	{
		int index = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}


	printArr(arr, len);


	//注意:此时的len等于5
	return 0;
}











