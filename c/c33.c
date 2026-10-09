#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//拨打服务电话,按键选择
	//机票预订电话
	//电话语音提示:
	//1.查询
	//2.预订
	//3.改签
	//4.退出
	//其他键也是退出

	int num;
	printf("请输入你想要的数字:\n");
	scanf("%d",&num);

	switch (num)
	{
	case 1:
		printf("机票查询\n");
		break;
	case 2:
		printf("机票预订\n");
		break;
	case 3:
		printf("机票改签\n");
		break;
	// [优化] 这里其实可以直接用 default 收口("其他键都退出"),
	//        省掉 4~0 七行; 现在的写法也能跑, 只是啰嗦
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
		printf("退出界面\n");
		break;
	default:
		printf("没有这个选项\n");
 	    break;


	}



	return 0;
}