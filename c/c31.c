#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//需求:键盘录入月份数并输出对应的季节

	//春:3,4,5
	//夏:6,7,8
	//秋:9,10,11
	//冬:12,1,2

	int yue;
	printf("请输入你想要的月份\n");
	scanf("%d",&yue);

	switch (yue)
	{
	case 3:
		printf("现在是春天\n");
		break;
	case 4:
		printf("现在是春天\n");
		break;
	case 5:
		printf("现在是春天\n");
		break;
	case 6:
		printf("现在是夏天\n");
		break;
	case 7:
		printf("现在是夏天\n");
		break;
	case 8:
		printf("现在是夏天\n");
		break;
	case 9:
		printf("现在是秋天\n");
		break;
	case 10:
		printf("现在是秋天\n");
		break;
	case 11:
		printf("现在是秋天\n");
		break;
	case 12:
		printf("现在是冬天\n");
		break;
	case 1:
		printf("现在是冬天\n");
		break;

	case 2:
		printf("现在是冬天\n");
		break;

	default:
		printf("没有这个月份\n");
		break;

	}


	//可以直接删掉多余部分


	switch (yue)
	{
	case 3:
	case 4:
	case 5:
		printf("现在是春天\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("现在是夏天\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("现在是秋天\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("现在是冬天\n");
		break;

	default:
		printf("没有这个月份\n");
		break;


	}







	return 0;
}