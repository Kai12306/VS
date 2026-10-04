#include<stdio.h>
int main()
{
	//变量的生命周期:变量只在所属的大括号中有效

	
	if (1)
	{
		int a = 10;
		//这句话放在if外面就属于main的范围内,就可正常使用
		printf("%d",a);
		//不能把这一句放在大括号外
		//超出就会在内存当中(即大括号)消失,就用不了了
	}


	for (int i = 1;i <= 5;i++)

	{
		int sum = 0;
		sum = sum + i;
		printf("\n");
		printf("%d  ", i);
		printf("\n");
		printf("%d  ", sum);
	}

	//每次想重新用一个全新变量,变量就定义在循环里
	//若不想,如:累加.就必须定义在循环里

	
	//需求:
	
	// 1.定义一个累加变量进行求和

	int sum = 0;
	 
	 
	//2.求1~100之间的偶数和

	printf("\n");

	for (int i = 1;i <= 100;i++)
	{
		//3.判断是否为偶数
		if (i % 2 == 0)
		{
			sum = sum + i;
		}

	}

	//4.打印
	printf("%d\n", sum);




	// 1.定义一个累加变量进行求和

	int sum1 = 0;


	//2.求1~100之间的奇数和

	printf("\n");

	for (int i = 1;i <= 100;i++)
	{
		//3.判断是否为奇数
		if (i % 2 != 0)
		{
			sum1 = sum1 + i;
		}

	}

	//4.打印
	printf("%d\n", sum1);




	return 0;
}











