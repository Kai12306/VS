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


	for (int i = 1;i <= 100;i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
			break;
		}

	}

	//continue:跳转到执行条件

	for (int i = 1;i <= 10;i++)
	{
		if (i == 3)
		{
			continue;
			//跳到i++处,直接把第三次循环跳过
		}
		printf("%d\n", i);
	}


	printf("小圈圈吃包子,发现第三个包子里有虫\n");

	for (int i = 1;i <= 5;i++)
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

	//右上角（直角在右上）

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

			printf("%d*%d=%d\t", j, i, j * i);

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

	//一

	// 给定整数 N
	// 获取所有小于等于 N 的质数的数量
	// 示例:输入 N 等于100
	// 输出25个质数
	int count1 = 0;

	//从2开始,因为1不是质数
	for (int i = 2;i <= 100;i++)
	{
		//count用来记录:i这个数字,被别的小数字整除了几次
		//注意:每换一个新的i,都要清零,重新数
		int count = 0;

		//统计从2开始,到i-1为止,在这个范围内,有多少个数字可以被整除
		for (int j = 2;j < i;j++)
		{
			//找到一个数,可以被i整除
			if (i % j == 0)
			{
				count++;
				break;	//只要能整除一次,它就不是质数,不用再往下试了
			}
		}

		//count还是0,说明从2到i-1没有一个能整除它,它就是质数
		if (count == 0)
		{
			printf("%d ", i);
			count1++;	//质数的个数加1
		}
	}

	printf("\n100以内有%d个质数\n", count1);

	//可以使用ctrl+r去统一改变量名



//二
	printf("\n");


	//1.定义
	int x = 17;
	int counta = 0;

	for (int i = 2;i < x;i++)
	{
		if (x % i == 0)
		{
			counta++;
			break;
		}
	}

	if (counta != 0)
	{
		printf("%d不是一个质数\n", x);
	}
	else
	{
		printf("%d是一个质数\n", x);
	}

	//三.

	printf("\n");


	int countb = 0;
	int countc = 0;

	for (int i = 2; i < 100; i++)
	{
		int counta = 0;

		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				counta++;
				break;
			}
		}

		if (counta != 0)
		{
			printf("%d不是一个质数\n", i);
			countc++;
		}
		else
		{
			printf("%d是一个质数\n", i);
			countb++;
		}
	}

	printf("2~100之间的每个数字的质数有%d个\n", countb);
	printf("2~100之间的每个数字的合数有%d个\n", countc);


	//循环高级:幂级数列

	/*
	1的1次方,加2的2次方,加3的3次方，一直加到10的10次方.
	结果是多少？提示，结果过大，用 long long 类型。
	正确答案10405071317。
	*/

	long long re = 0;

	for (int i = 1;i <= 10;i++)
	{
		long long k = 1;

		for (int j = 1;j <= i;j++)
		{
			k = k * i;
		}
		re = re + k;

	}

	printf("正确答案:%lld\n", re);

	//特殊数字

	/*
	和为15的数字.
	找出0~1000之内符合要求的数字要求。
	每一位数字之和等于15
	举例:78, 168,1167
	*/

	//套路:
	//1.外循环:获取范围中的每一个数字:0~1000
	//2.内循环:处理这个数字
	//每个数字之和等于15





	for (int i = 1;i <= 1000;i++)

	{
		int num = i;
		int kl = 0;
		while (num != 0)
		{
			//获取
			int temp = num % 10;
			//去除
			num = num / 10;
			kl = kl + temp;
		}
		if (kl == 15)
		{
			printf("%d\n", i);
		}
	}


	//循环嵌套的跳出问题

	//break:跳出单层循环
	//goto :跳出多层循环;可以用在任何地方
	


//	//外循环
//	for (int i = 1; i <= 3; i++)
//	{
//		//内循环
//		for (int j = 1; j <= 5; j++)
//		{
//			printf("内循环执行%d\n", j);
//			//break;//跳出内循环
//			goto a;
//		}
//		printf("内循环结束\n");
//		printf("------------\n");
//	}
//
//	//标号
//a:  printf("外循环结束\n");


	/*
	goto: 结合标号,可以跳到代码中的任意地方。
		一般只用于跳出循环嵌套
*/

	/*int i = 1;
a:
	printf("你好你好%d\n", i);
	i++;

	goto a;*/

	int i = 1;

a:
	printf("你好你好%d\n", i);
	i++;

	if (i == 15)
	{
		goto b;
	}
	goto a;

b:
	printf("看看我执行了吗？");




	return 0;
}
