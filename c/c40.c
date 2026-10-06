//1.函数基本定义格式

void playgame()  //函数名()
{
	printf("好好加油\n");
	printf("好好努力\n");
	printf("好好学习\n");
	printf("不要放弃\n");
	//函数体
}

//2.函数调用方式:函数名()

//void sum()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = num1 + num2;
//	printf("10与20相加的和:%d\n",sum);
//}

//3.带参数的函数
void sum(int num1,int num2)
{
	int sum = num1 + num2;
	printf("这两个数相加的和:%d\n", sum);
}
//函数定义中的小括号里的叫形参   (形式参数)
//函数名中的小括号里的叫实参     (实际参数)

//型参与实参必须一一对应

//问题本质，相加的数字不确定

void sum1(int num)
{
	for (int i = 1;i <= num;i++)
	{
		printf("阿伟%d\n",i);
	}
}




#include<stdio.h>
int main()
{
	//函数:程序中独立的功能
	
	//反复书写的代码，又不确定什么时候会用的代码打包起来。



	//坑 1：strupr() 和 strlwr() 是微软自己加的，不是标准 C。
	//	它们在 Windows 的 <string.h> 里有，但换到 Linux / GCC 就找不到了
	 
	//坑 2：strcat() / strcpy() 会报 C4996 错误。
	//微软认为它们不安全（可能写越界），所以要 #define _CRT_SECURE_NO_WARNINGS
	 
	//坑 3：strcmp() 的结果不是"相等/不相等"，是"大/小"


	//函数名是自己起的名字，函数体是自己打包起来的


	playgame();
	printf("\n");
	printf("如果累了,也可以稍作休息\n");
	printf("\n");
	playgame();


	sum(20, 20);
	sum(20, 90);

	sum1(8);
	//1.函数的定义
	
	
	








	
	//2.函数的使用
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	//3.函数的使用细节













	//4.C 语言中常用函数










	//5.综合练习



	return 0;
}






