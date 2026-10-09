#include<stdio.h>
int binarySearch(int arr[], int len, int num);
int main()
{


	int a = 10;
	// [补充] %p 打印地址(十六进制); &a 取出变量 a 的地址
	// [观察] 连续运行两次, 地址可能不同(ASLR 随机化); 但同一次运行里固定
	printf("%p\n", &a);   
	printf("a 的地址是: %p\n", &a);
	printf("\n");

	int b = 10;
	// [对比] b 的值和 a 一样都是 10, 但地址不同 —— 说明"值相同"不代表"同一块内存"
	printf("b 的值是: %d\n", b);
	printf("b 的地址是: %p\n", &b);
	printf("\n");

	int c = 20;
	// [补充] 栈上局部变量通常按定义顺序分配, 地址可能递增也可能递减(取决于编译器)
	printf("c 的值是: %d\n", c);
	printf("c 的地址是: %p\n", &c);
	printf("\n");


	//2.二分查找(折中查找)
	//前提:数组中的数据必须是有序的
	//如:从小到大,从大到小

	//核心:每次排除一半查找范围

	//int arr[] = { 3,41,54,56,82.103,239,324};

	//           min      mid           max

	//            0  1  2  3  4  5   6   7    


	//查找56:

	//1.min和max表示当前的查找范围
	//2.mid在min和max的中间
	//3.查找元素在mid的左边
	//缩小范围时,min不变,max=mid-1;
	//                右边
	//          max     min=mid+1;


	//查找400时,或者是大于最右边的数字时
	//min会先与max在同一位置上(索引)
	//后由于min+1,min会在max的左边

	//此时会显示不存在

	
	int arr[] = { 3,41,54,56,82,103,239,324 };
	int len = sizeof(arr) / sizeof(int);
	int num = 324;

	//作用:利用二分查找,找数据
	//返回值:数据在数组中的索引
	//找到:真实
	//没找到:-1

	//函数:
	//int binarySearch(int arr[], int len, int num);
    //放在main的外面
	
	int index= binarySearch( arr, len, num);
	printf("%d",index);



	return 0;
}



//作用:利用二分查找,找数据
//返回值:数据在数组中的索引
//找到:真实
//没找到:-1

//函数:
int binarySearch(int arr[], int len, int num)
{
	int min = 0;
	int max = len-1;


	while (min <= max)
	{
		int mid = (min + max) / 2;

		//mid,min,max为索引
		//num为元素
		//不能用mid与num比较,要用arr[mid]

		if (arr[mid] < num)
		{
			min = mid + 1;
		}

		else if (arr[mid] > num)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}

	}

	return -1;
}
//
//左侧：总结
//
//1. 二分查找的优势？
//提前查找效率
//
//2. 二分查找的前提条件？
//数据必须是有序的
//如果数据是乱的，先排序再用二分查找得到的索引没有实际意义
//只能确定当前数字在数组中是否存在，因为排序之后数字的位置就可能发生变化了
//
//3. 二分查找的过程
//- min 和 max 表示当前要查找的范围
//- mid 是在 min 和 max 中间的
//- 如果要查找的元素在 mid 的左边，缩小范围时，min 不变，max 等于 mid 减 1
//- 如果要查找的元素在 mid 的右边，缩小范围时，max 不变，min 等于 mid 加 1
//



