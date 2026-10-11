#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int jia(int num1, int num2);
int jian(int num1, int num2);
int cheng(int num1, int num2);
int chu(int num1, int num2);

int main()
{
	/*
	函数指针的练习:

		定义加、减、乘、除、四个函数
		用户键盘录入三个数字
		前两个表示参与计算的数字
		第三个数字表示调用的函数

		1：加法
		2：减法
		3：乘法
		4：除法

		细节:只有形参完全相同，而且返回值也要一样的函数
		才能放到同一个函数指针数组当中
	*/

	//int a = 10;
	//int b = 20;
	//int choose = 1;
	////使用if判断语句

	//1.定义一个数组去装四个函数的指针
	//函数指针数组:
	int(*p[4])(int, int) = { jia,jian,cheng,chu };

	//2.用户键盘录入三个数据
	printf("请录入两个数据参与计算\n");
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);

	printf("%d\n", num1);
	printf("%d\n", num2);

	printf("\n");


	printf("1是加法\n");
	printf("2是减法\n");
	printf("3是乘法\n");
	printf("4是除法\n");

	int choose;
	printf("请录入一个你想要的数字表示要进行计算\n");
	scanf("%d",&choose);
	printf("\n");


	printf("1是加法\n");
	printf("2是减法\n");
	printf("3是乘法\n");
	printf("4是除法\n");

	if (choose < 1 || choose > 4)
	{
		printf("输入有误\n");
		return 0;          // 直接退出，后面代码碰都不碰
	}

	// 到这里，choose 一定是 1~4

	//3.根据用户的选择,调用不同的函数
	scanf("%d",&choose);
	int res = (p[choose - 1])(num1, num2);

		printf("\n");
		//4.输出打印:
		printf("%d\n", res);


	return 0;
}

int jia(int num1, int num2)
{
	return num1 + num2;
}

int jian(int num1, int num2)
{
	return num1 - num2;
}

int cheng(int num1, int num2)
{
	return num1 * num2;
}

int chu(int num1, int num2)
{
	return num1 / num2;
}