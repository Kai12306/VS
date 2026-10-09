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
	// [易错] double 在 scanf 里必须用 %lf (小写L); 用 %f 会写错字节数导致读到 0
	// [对照] printf 里 double 用 %f 就行, scanf 才严格要求 %lf —— 这是最容易踩的坑

	//3.求A面,B面,C面的面积
	double  areaA = length * width;
	// [补充] 长方体三组对面 A/B/C, 分别是 长*宽 / 长*高 / 宽*高
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