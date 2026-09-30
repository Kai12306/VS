#include<stdio.h>
int main()
{

	//三元运算符,三元表达式,问号冒号运算符

	//格式:
	//关系表达式 :?  表达式 1:  表达式 2;

	//练习1.获取两个变量之间的较大值
	/*int a = 10;
	int b = 20;
	int c = a > b ? a : b;
	printf("%d\n",c);
	printf("%d\n", a > b ? a : b);*/


	//练习2.获取三个变量中的最大值
	int a = 10;
	int b = 20;
	int c = 30;


	//先任意挑选两个数,然后进行比较,选出较大值
	int temp= a > b ? a : b;

	//再用较大值,与第三个数进行比较,选出最大值
	int max=  c > temp ? c : temp;

	//输出打印
	printf("%d\n", max);

	return 0;
}







