#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// [补充] 打印数组的函数先声明, 定义放后面; 这是 C 的常见组织方式
void printArr(int arr[], int len);

int main()
{

	//要求:
	// 键盘录入5个数据并存入数组，完成以下需求
	// 1.遍历数组
	// 2.反转数组
	// 3.再次遍历

	//1.定义一个数组;
	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	//2.键盘录入数据
	for (int i = 0;i < len;i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		// [注意] arr[i] 是第 i 个元素, 取它的地址要写 &arr[i];
		//        这里和"数组名不用加&"不冲突 —— 数组名是整体地址, 单个元素要取址
		scanf("%d",&arr[i]);
		//scanf("%d",&arr[索引]);
	}

	printf("\n");


	//3.遍历数组
	printArr(arr, len);

    //4.反转数组
	// [核心] 反转数组的双指针法: i 从最左, j 从最右, 相向而行交换
	//        当 i >= j 时说明中间已经碰头, 交换完毕
	int i = 0;
	int j = len - 1;

	while (i < j)
	{
		// [核心] 交换三部曲: 用临时变量 temp 中转
		// [易错] 不能直接 arr[i]=arr[j]; arr[j]=arr[i]; —— 那样第一步就把原值冲掉了
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}

	printArr(arr, len);




	return 0;
}

void printArr(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		printf("%d\n",arr[i]);
	}
}
















