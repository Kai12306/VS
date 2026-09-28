#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//关于c13的一些小问题
	//scanf之中要加&


	//键盘录入3个小数,分别表示长方体的长,宽,高
	//分别求A面,B面,C面的面积,以及长方体的体积,结果保留两位小数

	//1.定义长方体的长,宽,高
	double length;
	double width;
	double height;

	//2.键盘录入三个小数,分别表示长方体的长,宽,高
	printf("输入三个小数,分别表示长方体的长, 宽, 高\n");
	scanf("%lf %lf %lf", &length, &width, &height);

	//3.求A面,B面,C面的面积
	double  areaA = length * width;
	double  areaB = length * height;
	double  areaC = width *   height;
		

	//4.输出打印
	printf("A面的面积为:%.2lf\n", areaA);
	printf("B面的面积为:%.2lf\n", areaB);
	printf("C面的面积为:%.2lf\n", areaC);

	//5.求长方体的体积
	double bulk = length* width*height;
	printf("长方体的体积为:%.2lf\n", bulk);

	return 0;
}