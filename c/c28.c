#include<stdio.h>
int main()
{
	/*if (关系表达式)
	{
		语句体a;
	}
	else
	{
		语句体b;
	}*/


	//if (关系表达式a)
	//{
	//	语句体a;
	//}

	//else if(关系表达式b)
	//{
	//	语句体b;
	//}

	//else if (关系表达式c)
	//{
	//	语句体c;
	//}
	//...
	//else  
	//{
	//	语句体n;
	//}

	//1.从上往下进行判断
	//有一个成立,就执行对应语句体
	//都不成立就,就执行else语句体


	//需求
	// 1.录入氪金额度,不同额度vip的等级不同
	// 1到99,vip1
	// 100到499,vip1
	// 500到099,vip1
	// 1000到1999,vip1
	// 2000到5000,vip1


	// 1.录入氪金额度,不同额度vip的等级不同

	int money;
	printf("请输入你在游戏中的氪金额度\n");
	scanf("%d", &money);


	if (money == 0)
	{
		printf("零氪\n");
	}
	else if (money>=1&&money<=99)
	{
		printf("vip1\n");
	}

	else if (money >= 100 && money <= 499)
	{
		printf("vip2\n");
	}

	else if (money >= 500 && money <= 999)
	{
		printf("vip3\n");
	}
	else if (money >= 1000 && money <= 1999)
	{
		printf("vip4\n");
	}
	else if (money >= 2000 && money <=5000)
	{
		printf("vip5\n");
	}
	else if (money > 5000)
	{
		printf("最顶级的vip5\n");
	}
	else
	{
		printf("不要乱填\n");

	}






















	return 0;
}

