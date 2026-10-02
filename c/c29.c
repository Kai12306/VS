#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int point;

	printf("期末考试分数最高为100分\n");
	printf("请输入你的考试成绩:\n");
	scanf("%d", &point);
	

	if (point <= 100 && point >= 85)
	{
		printf("你的等级为:A");
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



