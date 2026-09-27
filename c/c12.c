#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	//int a;
	//int b;
	//scanf("%d",&a);
	//scanf("%d",&b);

    /*scanf("%d %d",&a , &b);*/   //这样写会覆盖

	//printf("输入的两数之和为:%d\n",a+b);

	/*定义两个整数类型的变量,num1和num2
	键盘录入数据分别为两个变量赋值
	求两个变量的和并进行打印*/

	//1.定义两个变量
	int num1;
	int num2;
	//也可以写为int num1,num2;

	//2.键盘录入多个数据
	printf("请输入两个整数:");
	scanf("%d %d",&num1 , &num2);

	//注意: %d %d , 需要与输出界面一致
	//空格的多少没关系,但要是有逗号,输出界面就一定也要有
	//关键是与前一个 %d 对齐,且不要用数字隔开(会变乱)
	//用空格甚至可以用回车,方便




	//3.相加并输出
	printf("%d\n",num1+num2);
	printf("%d\n", num1);
	printf("%d\n", num2);



















	return 0;

}