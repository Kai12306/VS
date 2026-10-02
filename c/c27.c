#include<stdio.h>
int main()
{
	//1.需求
	//我和朋友一起去看电影
	//如果是同一排,连着坐.我会和他开心看电影
	//如果不同意排,或者是连着坐.我会开心的打游戏

	//提示:电影票定义两个整型变量,分别表示第几排和座位号


	//电影票规则
	//X排X号


	//1.定义四个变量分别表示电影票不同的行列

	int rowa = 5;
	int numa = 6;

	int rowb = 1;
	int numb = 6;

	//2.判断
	//同一排: rowa == rowb
	//连着坐: numa  -numb   1   -1

	printf("%d排,%d个\n", rowa,numa);
	printf("%d排,%d个\n", rowb,numb);
	

	if ((rowa == rowb) && (numa - numb == 1 || numa - numb == -1))
	{
		printf("我会和他开心看电影\n");
	}
	else
	{
		printf("我会开心的打游戏\n");
	
	}







	return 0;
}









