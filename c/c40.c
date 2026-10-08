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

int sun(int base, int addition)
{
	int sun = base + addition;
	return sun;
}

int result(int bas, int add,int tion)
{
	int result = bas + add +tion;
	return result;
}


//void  没有返回值    整数改为int,小数改为double

//return  1.结束函数
//2.把后面的数据,交给调用处

//void sum(int num1, int num2) //返回值类型 函数名(形参1,形参2)
//{
//	int sum = num1 + num2;   //函数体
//	return sum;              //return 返回值;
//}

//返回值类型与返回值要对应起来

//变量=函数名(实参);
//printf("占位符",函数名(实参));
//一般使用上面的


//需求:
//小桂桂考试成绩，基础得分93，附加得分10。
//小丹丹考试成绩，基础得分87，附加得分9。
//请问谁的总分高？
 


//最终格式:
//返回值类型 函数名(形参1,形参2)
//{
//函数体;
//return 返回值;
//}


//调用格式:
//变量=函数名(实参);
//printf("占位符",函数名(实参));
//一般使用上面的

//提高代码的复用性
//提高代码的可维护性


//定义函数的终极绝招
//三个问题:
//1.我定义函数是为了干什么?            函数体
//1.干这件事需要什么才能完成           形参
//3.我干完了,调用处是否需要继续使用     返回值类型

//需要时,返回值必须写;不需要 则用void


double area (double length,double width)
{
	double area = length * width;
	return area;
}


double re (double r)
{
	double re = r;
	return re;
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

	int score1 = sun(93, 10);
	int score2 = sun(87, 9);

	if (score1>score2)
	{
		printf("\n");
		printf("小惠惠的成绩更高\n");
	}
	else if (score1 < score2)
	{
		printf("\n");
		printf("小丹丹的成绩更高\n");
	}
	else
	{
		printf("\n");
		printf("二者分数相等\n");
	}

	int sore1 = result(10, 20, 15);
	int sore2 = result(20, 30, 17);
	int sore3 = result(19, 17, 20);
	int sore4 = result(23, 21, 19);

	int max = sore1;               // 第一个先上台当擂主

	if (sore2 > max) max = sore2;  // 挑战者赢了就换人
	if (sore3 > max) max = sore3;
	if (sore4 > max) max = sore4;

	printf("季度营销额最高为%d\n", max);

	/*int max = sore1;
	max = sore2 > max ? sore2 : max;
	max = sore3 > max ? sore3 : max;
	max = sore4 > max ? sore4 : max;*/

	area(5.3, 1.8);
	area(3.1, 8.2);

	double areaa= area(5.3, 1.8);
	double areab= area(3.1, 8.2);

	if (areaa > areab)
	{
		printf("长方形a的面积更大\n");
		printf("长方形b的面积为:%lf\n",areaa);
	}
	
	else if(areaa < areab)
	{
		printf("长方形b的面积更大\n");
		printf("长方形b的面积为:%lf\n",areab);
	}
	else
	{
		printf("二者的面积相同\n");
		printf("长方形b的面积为:%lf","长方形b的面积为: % lf\n", areaa,areab);
	}

	re(5.4);
	re(6.2);


	double r1 = re(5.4);
	double r2 = re(6.2);

	if (r1 > r2)
	{
		printf("圆一的半径大\n");
	}
	else if (r1 < r2)
	{
		printf("圆二的半径大\n");
	}
	else
	{
		printf("二者半径一样大\n");
	}

	//1.函数的定义

	//2.函数的使用

	//3.函数的使用细节

	//4.C 语言中常用函数

	//5.综合练习

	return 0;
}






