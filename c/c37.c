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
	// [易错] 格式串里连写了两个空格, 输入时需敲多个空格吗? 不需要, scanf 的空白可匹配任意多个
	//        但更规范的是写一个空格: "%d %d"
	
	//2.判断min与max大小
	// [核心] 用三元运算符自动处理"谁大谁小", 用户颠倒输入也能正确统计
	int min = num1 < num2 ? num1 : num2;
	int max = num1 > num2 ? num1 : num2;


	//3.定义一个变量统计个数
	int count = 0;

	//4.获取范围中的每一个数
	for (int i = min;i <= max;i++)
	{
		// [优化] "同时被 6 和 8 整除" 等价于 "被它们的最小公倍数 24 整除"
		//        写 i % 24 == 0 更快更简洁
		if (i % 6 == 0 && i % 8 == 0)
		{
			count++;
		}
	}

	//5.打印
	printf("在输入两个数字之间,能被6与8同时整除的数字有:%d个",count);







	return 0;
}










