#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//执行流程:

	//1.执行初始化语句   (只执行一次)

	//2.执行条件判断语句,看其结果是否成立
	// 成立 : 执行循环语句体   不成立 : 结束循环

	//(判断语句成立,循环继续)
	//(判断语句不成立,循环结束)

	//3.执行条件控制语句

	//4.回到 2.继续执行条件判断语句

	for (int i = 1; i <= 3; i++)
	{
		printf("我是卡密\n");
	}


	//第一次循环: i=1;

	//  1.2.3.4.

	//第二次循环: i=2;

    //  2.3.4.


	//第三次循环: i=3;

    //  2.3.4.


	//第四次循环: i=4;

    
	printf("1~100 分析结果\n");

	/*int num;
	printf("请输入整数\n");
	scanf("%d",&num);*/
	
	printf("以下这些整数可以被3整除:\n");

	for (int i = 1; i <= 100; i++)
	{
		// [核心] % 余数为 0 = 能被整除
		if (i % 3 == 0)
		{
			printf("%d  ", i);
		}
	}


	printf("以下这些整数不可以被3整除:\n");

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 != 0)
		{
			printf("%d  ", i);
		}
	}

	printf("\n");


	int count = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			count++;
		}
	}


	printf("0到100中,可以被3整除的整数有%d\n",count);


	// [核心] 九九乘法表: 外循环控制"行", 内循环控制"每行几列"
	//        内循环的界 j <= i, 所以第一行1列、第二行2列 ... 呈三角
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{

			// [易错] 打印顺序是 j*i, 不是 i*j; 因为要形成"1*3 2*3 3*3"这种排列
			printf("%d*%d=%d\t", j, i, i * j);

		}

		printf("\n");

	}



	// [注意] 二维数组: 3 行 4 列; 这里只是演示嵌套结构, 还没真正用起来
	int arr[3][4];
	for (int i = 0; i < 3; i++)        // ← 结构完全一样
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	int i;
	for (i = 1; i <= 5; i++ )
	{
		printf("%d  ",i);
	}

	printf("\n");
	
	for (i = 5; i>=1; i--)
	{
		printf("%d  ", i);
	}

	printf("\n");


	//求和

	//需求:1~5之间

	// [核心] 累加求和的标准套路: 先定义 sum=0, 再循环里 sum = sum + 新值
	// [易错] sum 必须在循环外定义! 放循环里每次都清零, 最后只有最后一个数
	int sum = 0;

	for (int i = 1;i <= 5;i++)
		
	{
		printf("%d  ",i);
		sum = sum + i;

		//1.sum + i
		//0+1
		//2.sum + i
		//1+2
		//3.sum + i
		//3+3




	}

	printf("\n");
	printf("得到的总和:%d\n", sum);

	return 0;
}





