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
	//(下面这条是毫秒级种子,手动调试用不到,先留着备用)
	//srand((unsigned int)(time(NULL) ^ (unsigned int)GetTickCount()));
	// [补充] time 返回 time_t, 转成 unsigned int 是 srand 要求的参数类型
	// [重要] srand 全程序只调一次, 放在循环里会让随机数变"规律"
	srand((unsigned int)time(NULL));

	//重要:打乱数组必须倒序洗牌(Fisher-Yates)
	//      正序洗的话,前面换好的位置会被后面的 i 又换回去,概率不均匀
	// [核心] Fisher-Yates 洗牌算法: 从后往前, 把第 i 个和 [0,i] 中随机一个交换
	//        这样每种排列的概率都相等, 是"最公平"的洗牌法
	for (int i = len - 1; i > 0; i--)
	{
		// [核心] 随机范围是 [0, i], 所以是 rand() % (i+1) 而不是 %len
		int index = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}


	printArr(arr, len);


	//注意:此时的len等于5
	return 0;
}











