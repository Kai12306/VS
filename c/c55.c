#include<stdio.h>
int main()
{

//选择排序:
//选择排序从零索引开始，拿着每一个索引上的元素，跟着后面的元素依次比较
//小的放前面，大的放后面，以此类推。

	//第一轮结束,最小的数据确定

	//定义数组
	int arr[] = { 3,4,2,1,5 };
	int len = sizeof(arr) / sizeof(int);

	for (int j = 0;j < len-1 ;j++)
	{
		for (int i = j+1;i <len;i++)
		{
			//依次表示j后面的每一个索引
			if (arr[j] > arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}



		}

	}

	for (int i = 0;i < len;i++)
	{
		printf("%d  ",arr[i]);
	}



	return 0;
}










