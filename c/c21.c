#include<stdio.h>
int main()
{

	// && 和 || 具有短路效果

	/*int a = 0;
	printf("%d\n",a>1 && a<10);


	int b = 10;
	printf("%d\n", b==10 || b==20);*/



	//此时会有短路现象,因为&&是同时满足11才成立
	//而a>1的计算结果是0,就可以直接判断是0
	//即左边表达式可以计算出结果时,右边就可以不用计算了

	int a = 1;
	int b = 5;
	a > 0 && ++b;
	printf("a=%d,b=%d\n",a,b);
	a > 10 && ++b;
	printf("x=%d,y=%d\n", a, b);






	return 0;
}