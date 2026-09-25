#include<stdio.h>

int main()
{
	//1.定义格式;    数据类型  变量名;
	int a;
	//2.赋值/修改值;    变量名=数据值;
	a = 10;

	printf("%d\n", a);

	//3.如果定义的时候,已经知道变量中存储的数据;
	int b = 20;
	printf("%d\n",b);

	//1.练习两个数相加,(变量参与计算)
	//需求:定义两个变量,分别存储10和20,求两个数的和
	int c = 10;
	int d = 20;
	printf("%d\n",c+d);
	int e = c + d;
	printf("%d\n", e);

	//2.练习用一个变量表示微信余额
	//需求:本身有100元,之后收到2元红包
	//经常发生改变的数据,可以用变量来表示
	int money = 100;
	money = money + 2;
	printf("%d\n",money);

	//3.人物初始的血量为100;
	//对战时会受到80点伤害;
	//使用技能可以恢复60点血量;
	int blood = 100;
	blood = blood - 80;
	
	printf("%d\n", blood);

	printf("人物战斗剩余血量:%d\n",blood);

	blood = blood + 60;

	printf("人物最终剩余的血量:%d\n",blood);




}