#include<stdio.h>

void printfarre(int arr[], int len)
{
	printf("%zu\n", sizeof(arr));
	//8   64位的操作系统当中,是以64个二进制表示内存地址值的
	//此时不是数组的整体,仅仅是一个变量
	//int len = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);
	//没有取址符

	for (int i = 0;i <len;i++)
	{
		printf("%d\n", arr[i]);
	}





}

int main()
{
	//1.数组作为函数的形参  要注意什么?

	//实际上传递是数组的首地址,如果要在函数对数组进行遍历,一定要把数组的长度,一起传递
	//定义处:arr表示完整的数组
	//函数中的arr:只是一个变量,用来记录数组的首地址



	//2.数组的索引越界
	//最小索引:0
	//最大索引:长度-1
	
	


	int arr[] = { 1,2,3,4,5 };
	//printf("%p\n",&arr);
	printf("%zu\n", sizeof(arr));

	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", len);

	printfarre(arr, len);

	printf("%d\n", arr[10]);

	return 0;
}