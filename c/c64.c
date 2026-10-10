#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double weight;
	double height;

	printf("请输入你的身高(单位m,只写数字)\n");
	scanf("%lf", &height);

	printf("请输入你的体重(单位kg,只写数字)\n");
	scanf("%lf", &weight);

	if (height <= 0)
	{
		printf("该身高不存在\n");
		printf("无法计算BMI\n");
		return 0;
	}

	if (weight <= 0)
	{
		printf("该体重不存在\n");
		printf("无法计算BMI\n");
		return 0;
	}

	double BMI = weight / (height * height);

	printf("您的BMI为 %lf\n", BMI);

	if (BMI < 18.5)  //两个非零整数相除没有等于或者小于0的情况
	{
		printf("您属于偏瘦\n");
	}
	else if (BMI < 23.9 && BMI>=18.5)
	{
		printf("您属于正常\n");
	}
	else if (BMI < 24.0 && BMI >= 27.9)
	{
		printf("您属于超重\n");
	}
	else
	{
		printf("您属于肥胖\n");
	}

	return 0;
}
