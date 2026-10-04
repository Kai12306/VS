#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    //输入两个数字,表示范围
	//统计这个范围中
	//能被6整除,又能被8整除的数字有几个

	//1.键盘录入两个数字
	int num1;
	int num2;
	printf("请输入两个数字:");
	scanf("%d  %d", &num1, &num2);
	
	//2.判断min与max大小
	int min = num1 < num2 ? num1 : num2;
	int max = num1 > num2 ? num1 : num2;


	//3.定义一个变量统计个数
	int count = 0;

	//4.获取范围中的每一个数
	for (int i = min;i <= max;i++)
	{
		if (i % 6 == 0 && i % 8 == 0)
		{
			count++;
		}
	}

	//5.打印
	printf("在输入两个数字之间,能被6与8同时整除的数字有:%d个",count);









	return 0;
}










