#include<stdio.h>
int main()
{
	//查找:
	//数组的基本查找:顺序
	//核心:从数组的0索引开始,往后
	//找到:返回数据对应的索引
	//未找到:返回-1 (公认的,意味数据出错)

	//1.定义数组
	int arr[] = { 12,44,55,76,98 };
	int len = sizeof(arr) / sizeof(int);

	//2.定义变量

	int num = 55;




	return 0;
}

int order(int arr, int len, int num)
{
	for (int i = 0;i < len;i++)
	{
		if (arr[i] = num)
		{
			return i;
		}
	}	
	return -1;
}












