#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//需求:键盘上输入一个三位数,将其拆分为个位,十位,百位.打印在控制台
	//输出结果
	 /* 个位 : 3  
      十位 : 2
      百位 : 1*/

	//1.键盘录入一个三位数
	printf("请输入一个三位数:\n");
	int num;
	scanf("%d", &num);
	
	//2.拆分
	int ge = num % 10;
	int shi = num / 10 % 10;
	int bai = num / 100;
	int qian = num / 1000;

	printf("个位是:%d\n",ge);
	printf("十位是:%d\n",shi);
	printf("百位是:%d\n",bai);
	printf("千位是:%d\n", qian);


	return 0;
}








