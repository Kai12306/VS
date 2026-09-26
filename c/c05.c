#include<stdio.h>

int main()
{
	//1.变量只能存在一个值
	int a = 10;
	printf("%d\n",a);

	a = 20;
	printf("%d\n",a);//20

	//2.变量名不可以重复
	//int a = 20;
	//printf("%d\n,a");

	//3,一条语句可以定义多个变量(了解)
	int b = 10, c = 20, d = 30;
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	//4.在使用之前,一定要进行赋值
	//int e;
	//printf("%d\n", e);

	//5.变量的作用范围

	return 0;
}