#include<stdio.h>

// [补充] 查找函数: 找到返回索引(>=0), 没找到返回 -1(约定俗成的"没找到"标志)
int order(int arr[], int len, int num);







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

	int num = 555;
	// [观察] 555 不在数组 {12,44,55,76,98} 里, 所以函数会返回 -1
	//        把 num 改成 76 试试, 应返回索引 3
	//可以改变num的值来查看结果是否正确
    
	int index = order(arr, len, num);

	printf("%d\n",index);






	return 0;
}

int order(int arr[], int len, int num)
{
	for (int i = 0;i < len;i++)
	{
		// [核心] 一找到就立刻 return, 后面的不用再比; 循环跑完还没返回说明没找到
		if (arr[i] == num)
		{
			return i;
		}
	}	
	return -1;
}












