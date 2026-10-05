#include<stdio.h>
int main()
{

	//无限循环中用的比较多的是while
	//do...while 用的比较少
	//无限循环下面不建议写其他代码
	//因为无限,下面的代码永远执行不到

	/*for (;;)
	{
		printf("我是无敌的\n");
	}

	while (1)
	{
		printf("我是无敌的\n");
	}*/

	//  在1到100之间找
	//	第一个既能被3又能被5整除的数字。
	//	Break :不能单独书写
	//	只能在 Switch 或者在循环中表示结束跳出的意思。


	for (int i=1;i<=100;i++)
	{
		if (i%3 ==0 && i%5==0)
		{
			printf("%d\n",i);
			break;
		}

	}
	
	//continue:跳转到执行条件

	for (int i = 1;i <= 10;i++)
	{
		if (i ==3)
		{    continue;
			//跳到i++处,直接把第三次循环跳过
		}
		printf("%d\n", i);
	}


	printf("小圈圈吃包子,发现第三个包子里有虫\n");

	for(int i = 1;i <= 5;i++)
	{
		if (i == 3)
		{
			continue;
			//结束本次循环,直接跳到下一个循环
			//switch结束整个循环或语句
		}
		printf("吃第%d个包子\n", i);
	}

	printf("怎么可能呢.必须是狠狠吃下第三个包子\n");

	//循环嵌套:循环里还有其他循环
	//写在外面称为外循环,里面称为内循环

	printf("*****\n");
	printf("*****\n");
	printf("*****\n");

	printf("\n");

	//先确定内循环做了什么
	//外循环只是把里面的代码执行了n次

	//外循环
	for (int i = 1;i <= 5; i++)
	{
		//内循环
		for (int j = 1;j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 1;i <= 7; i++)
	{
		//内循环
		for (int j = 1;j <= 8; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");



	//打印直角三角形

	//左下角
	printf("\n");

	for (int i = 1;i <= 5; i++)
	{
		for (int j = 1;j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//左上角
	for (int i = 1;i <= 5; i++)
	{
		for (int j = 5;j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	//右上角（直角在右上）?

		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= i - 1; j++) 
				printf(" ");      // 第一层：打空格
			for (int j = 1; j <= 6 - i; j++)
				printf("*");      // 第二层：打星号
			printf("\n");
		}

	    //右下角（直角在右下)

		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= 5 - i; j++)
				printf(" ");
			for (int j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		}

		printf("\n");


		//九九乘法表

		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= i; j++)

			printf("%d*%d=%d\t",j,i,j*i);

			printf("\n");
		}

		// \t 制表符:长的可变的大空格
		//会根据前面字母的个数,在后面补空格
		//让整体的长度达到8或者8的倍数
		//最少补1个,最多补8个
		//打数据表格时,可以让它们对齐

		//abc\t   补5个
		//zhangsan  \t  补8个
		//张\t    补6个

		printf("name\t\tage\tgender\thobby\t\n");
		printf("zhangsan\ta23\t男\t篮球\t\n");


	return 0;
}