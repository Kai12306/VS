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

	// [核心] 多分支 if-else if: 从上往下依次判断, 命中一个就跳出整条链
	// [易错] 顺序很重要! 如果先写宽条件(money>=1), 后面的窄条件永远轮不到
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


	// [优化] 这里的 && 其实多余: 能走到这条 else if, 说明上面 money==0 已经排除了
	//        写成 else if (money <= 99) 即可, 更简洁也不易出错
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
	// [优化] 前一条已覆盖到 5000, 这里可以直接用 else 收尾, 不必再判 >5000
	else if (money > 5000)
	{
		printf("最顶级的vip5\n");
	}
	// [补充] else 是兜底分支: 处理所有其他情况(负数等), 有它在程序才健壮
	else
	{
		printf("不要乱填\n");

	}






















	return 0;
}

