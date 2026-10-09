#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int point;

	printf("期末考试分数最高为100分\n");
	printf("请输入你的考试成绩:\n");
	scanf("%d", &point);


	// [重要] 这是一个逻辑错误: point 不可能同时"小于0"且"大于等于100", 恒为假!
	//        想表达"成绩不在 0~100 之间", 应该用 || : if (point < 0 || point > 100)
	//        (注意原文写的是 >= 100, 边界也错了: 100 是合法成绩)
	if (point < 0 && point >= 100)

	{
		printf("正常数据\n");
	}

	else  

	{
		printf("异常数据\n");
	}


	//也可以把下面的代码复制上来
	//即放在  printf("正常数据\n"); 这段代码之间



	

	// [优化] 由于 if-else if 是顺序排除, 后面分支不必再写右边界:
	//        if (point >= 85) ... else if (point >= 70) ... 更简洁
	if (point <= 100 && point >= 85)
	{
		printf("你的等级为:A");
		// [优化] 补上 \n, 不然下一行输出会挤在同一行
	}

	else if (point <= 84 && point >= 70)

	{
		printf("你的等级为:B");
	}
	
	else if (point <= 69 && point >= 60)

	{
		printf("你的等级为:C");
	}


	else if (point < 60 && point >= 0)

	{
		printf("你的等级为:D");
	}

	else 

	{
		printf("不要乱输入");
	}









	return 0;
}



