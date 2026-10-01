#include<stdio.h>
int main()
{/*
	if (关系表达式)
	{
		语句体a;
	}

	else
	{
		语句体b;
	}*/



	//需求:男子上门提亲
	//姑娘满意,会说,终身大事全凭父母做主
	//不满意,会说,女儿还想要再孝敬两年


	//1.定义变量,表示姑娘满意度
	int satisfy = 1;
	printf("姑娘满意度:%d\n", satisfy);
	if (satisfy>=60)
	{
		printf("终身大事全凭父母做主");
	}

	else
	{
		printf("女儿还想要再孝敬两年");
	}














	return 0;
}

