#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void fun()
{
	printf("fun函数执行了");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}
}


int sum(int num1, int num2)
{
	printf("sum函数执行了");
	int sum = num1 + num2;
	return sum;
}

//从上往下运行



int main()
{
	/*
	函数的注意事项

		1.函数不调用就不执行
		2.函数名不能重复
		3.函数与函数之间是平级关系，不能嵌套定义
		4.自定义函数写在main函数的下面，需要在上方申明
		5.return下面，不能编写代码，永远执行不到，属于无效的代码
		6.函数的返回值类型为void，表示没有返回值，return可以省略不写；
		  如果书写了return，后面不能跟具体的数据，仅表示结束函数
    */


	/*
	math.h
		pow()    幂
		sqrt()   平方根
		ceil()   向上取整
		floor()  向下取整
		abs()    绝对值

		课堂练习:
		long类型的绝对值用那个函数怎么获取?
		long long类型的绝对值用那个函数怎么获取?
		小数的绝对值用那个函数怎么获取?
	*/

	//pow()    幂
	double res1 = pow(2, 3);
	printf("%lf\n",res1);

	//sqrt()   平方根
	double res2 = sqrt(9);
	printf("%lf\n", res2);

	//ceil()   向上取整
	// [注意] ceil 是向上取整 -> 10; floor 是向下取整 -> 9
	double res3 = ceil(9.87);
	printf("%lf\n", res3);

	//floor()  向下取整
	double res4 = floor(9.87);
	printf("%lf\n", res4);
		
	//abs()    绝对值
	// [补充] 绝对值按类型分: abs(int) / labs(long) / llabs(long long); 小数用 fabs
	//        用错不报错但结果可能不对
	int res5 = abs(-10);
	printf("%d\n", res5);

	long res6 = labs(-10000);
	printf("%ld\n", res6);

	long long res7 = llabs(-10000);
	printf("%lld\n", res7);

	double res8 = fabs(-10.5);
	printf("%lf\n", res8);


	/*
	
	time.h:
		time()  获取当前时间

    */


     // time()	 获取当前时间
     // 形参: 表示获取的当前时间是否需要在其他地方进行存储
     //		 一般来讲，不需要在其他地方进行存储的，NULL（大写）
     // 返回值: long long
	 //time(NULL);

	// [补充] time(NULL) 返回从 1970-01-01 00:00:00 UTC 到现在的秒数(时间戳)
	//        传 NULL 表示"不需要额外存到别处"
	long long res = time(NULL);
	printf("%lld\n",res);

	//1791391090

	//c中随机数的获取 (伪随机)

	//1.使用srand设置种子
	//2.使用rand获取随机数
	  

	//随机数<stdlib.h>     standard library  标准库
	//	srand()         设置种子
	//	rand()          获取随机数

	//1.设置种子
	// 初始值:因为每个随机数都是通过前一个数字，再结合一系列复杂计算得到的

	printf("\n");

	// [核心] srand 设"种子"; 种子相同, rand 出来的序列完全相同(所以叫伪随机)
	// [易错] srand 整个程序只需调用一次, 千万别放进循环里
	srand(1);

	for (int i = 1;i <= 20;i++)
	{
		//2.获取随机数
		int num = rand();
		//3.输出打印
		printf("%d\n",num);
	}

	//使用<stdlib.h>

	//弊端:
	// 1.种子不变,随机数是固定的
	//2.随机数的范围

	//需要用变化的数当种子   时间

	printf("\n");

	
		// [正确] 用"当前时间"当种子, 每次运行都不同 -> 看起来才像真随机
		srand(time(NULL));
		for (int i = 1;i <= 20;i++)
		{
			//2.获取随机数
			int num = rand();
			//3.输出打印
			printf("%d\n", num);
		}

		//默认的种子是1,如有遇到要注意
		//默认范围 0~32767

		/*任意的范围之内获取一个随机数：
         1 - 100
         7 - 23
         8 - 49


         课堂练习：
	     1. 12 ~ 87
	     2. 17 ~ 39（不包含39）

		绝招：用于生成任意范围之内的随机数
			1. 把这个范围变成包头不包尾，包左不包右的 8 - 50
			2. 拿着尾巴 - 开头   50 - 8 = 42
			3. 修改代码

			详情可见练习纸

		*/

		//生成1~100的随机数
		//使用键盘录入去猜，猜中为止

		srand(time(NULL));
		// [核心] 生成 [1,100] 的公式: rand() % 范围 + 起点
		//        [a,b] 的通用公式: rand() % (b-a+1) + a
		int num = rand() % 100 + 1;

		//循环加键盘录入
		//随机数:50
		//输入50:中了
		//输入40:小了
		//输入60:大了

		int guess;
		// [补充] 计数器: 记录一共猜了几次, 每有效猜一次 +1
		int count = 0;

		// [核心] while(1) 是死循环, 靠内部的 break 跳出(猜到才 break)
		while (1)
		{
			printf("请输入你猜的数字:\n");
			// [易错] scanf 的返回值 = 成功读到的数据个数; 输入字母时返回 0,
			//        脏字符还留在缓冲区, 下一轮又读失败 -> 死循环刷屏
			//        所以必须判断返回值, 读到非数字就清掉这一行重来
			if (scanf("%d", &guess) != 1)
			{
				printf("[提示] 请输入数字!\n");
				while (getchar() != '\n');   // 吃掉本行残留的所有字符(含回车)
				continue;                      // 跳过本轮, 不计入次数
			}

			count++;   // 只有有效的一次猜测才计数

			//开始比较:

			if (guess>num)
			{
				printf("大了\n");
			}
			else if (guess < num)
			{
				printf("小了\n");
			}
			else
			{
				printf("中了! 一共猜了 %d 次\n", count);
				break;
			}






		}



	return 0;  //结束函数
}






