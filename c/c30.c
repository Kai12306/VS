#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	//switch
	//作用:把所有选项全部列举出来,根据不同条件选择其一

	/*switch (表达式) {

		case1;
		语句体1;
		break;

		case2;
		语句体2;
		break;
	...
	defult:
		语句体n;
		break;


	}*/


	//  case后面的 分号其实是冒号
	
	
	
	
	
	
	
	//1.首先计算表达式的值
	//2.之后比较case的值,若有对应的值,就执行,但遇到break就停止运行
	//3.case中无值匹配就执行 defult,结束switch语句


	//家里有七个抱枕
	//周一: 抱枕一
	//周二: 抱枕二
	//周三: 抱枕三
	//周四: 抱枕四
	//周五: 抱枕五
	//周六: 抱枕六
	//周七: 抱枕七

	//1.定义变量表示当前星期
	int week = 1;

	switch (week)
	{

	case 1:
	printf("使用抱枕一\n");
	break;

	case 2:
	printf("使用抱枕二\n");
	break;

	case 3:
	printf("使用抱枕三\n");

	case 4:
	printf("使用抱枕四\n");
	break;

	case 5:
	printf("使用抱枕五\n");
	break;

	case 6:
	printf("使用抱枕六\n");
	break;

	case 7 :
	printf("使用抱枕七\n");
	break;

    default :
	printf("没有这个星期\n");
	break;

}

	int sport;
	scanf("%d", &sport);
	
	if (1 <= sport && sport <= 7)

	{
		printf("今天星期:%d\n", sport);
		switch (sport)
		{

		case 1:
			printf("跑步\n");
			break;

		case 2:
			printf("游泳\n");
			break;

		case 3:
			printf("慢走\n");
			break;

		case 4:
			printf("骑单车\n");
			break;
			
		case 5:
			printf("打拳击\n");
			break;

		case 6:
			printf("爬山\n");
			break;

		case 7:
			printf("休息\n");
			break;

		default:
			printf("没有这个星期\n");
			break;

		}
	}
	else
		printf("没有这个星期\n");
	




	//1.表达式的计算结果只能是字符或整数
	//2.case,只能是字符或整数的字面量,不能是变量
	//3.case的值不允许重复
	//4.break,表结束,中断.结束switch语句
	//5.default,所有情况不匹配,就执行的内容
	//6.default可以写在任何位置,甚至省略不写


	//细节.switch与if的第三种格式的各自使用场景

	int num = 2;
	switch (num)
	{

	case 1:
		printf("当前数字是1\n");
		break;

	case 2:
		printf("当前数字是2\n");
		break;


		//case的穿透规则
		// 根据小括号中的表达式对应匹配的case
		// 执行case中相应的代码
		// 如果把break直接注释掉,会直接往下继续运行
		// 直到下一个break,或者全部运行case完为止
		//细节:case的穿透只往下,不会回到上面
		//且从对应好的值开始往下

	default:
		printf("没有当前数字\n");
		break;
	}

	printf("看看我执行了吗?\n");



	//switch:使用在有限的case进行匹配的情况下,比如:星期,月份.10个左右
	//if:是对一个范围进行判断
	//如果有限,建议使用switch,因为效率比较高





	return 0;
}







