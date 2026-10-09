#include<stdio.h>

// [重要] 数组做形参时, 传进来的其实是"首地址"(退化成指针)
//        所以函数内 sizeof(arr) 得到的是指针大小(64位下 8 字节), 不是数组总长!
//        这正是必须额外传一个 len 的原因
void printfarre(int arr[], int len)
{
	printf("%zu\n", sizeof(arr));
	//8   64位的操作系统当中,是以64个二进制表示内存地址值的
	//此时不是数组的整体,仅仅是一个变量
	//int len = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);
	// [核心] 数组名 arr 本身就代表地址, 所以这里取地址不用加 &, 加 &arr 反而类型不对

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

	// [核心] 求数组长度的黄金公式: 总字节数 / 单个元素字节数
	// [重要] 只能在"数组本体所在的那个函数"里算, 传进别的函数就失效了
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", len);

	printfarre(arr, len);

	printf("%d\n", arr[10]);
	// [危险] arr 只有 5 个元素(索引0~4), arr[10] 是越界读取!
	//        C 不会报错, 会读到后面的垃圾内存, 值是随机的; 养成"不越界"的习惯

	return 0;
}