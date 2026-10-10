#include<stdio.h>

void swap(int* p1, int* p2);

int main()
{
	int a = 10;
	int b = 20;

	/*
	printf("调用前:%d,%d\n",a,b);
	printf("\n");
	swap(a, b);
	printf("调用后:%d,%d\n", a, b);
	*/

	//此时有问题,它们的结果是一致的


	printf("调用前:%d,%d\n", a, b);
	printf("\n");
	swap(&a, &b);

	//因为此时是指针,所以需要我们加取址符

	printf("调用后:%d,%d\n", a, b);

	//传地址,改数据值


	return 0;
}

//void swap(int num1,int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}

//写法存在问题

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//   作用1: 操作其他函数中的变量
//
//   作用2: 函数返回多个值
//   void calc(int a, int b, int* sum, int* diff)   // 结果通过两个地址带出来
// 
//   作用3: 函数的结果和计算状态分开
//
//   作用4: 方便的操作数组和函数


