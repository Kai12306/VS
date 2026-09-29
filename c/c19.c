#include<stdio.h>

int main()
{

	//+= 
	//左边与右边相加,再把值赋给左边,对右边无影响

	int a = 10;
	int b = 20;
	a += b;            //a=a+b;
	printf("%d\n", a); //30
	printf("%d\n", b); //10


	//-= *= /= %=
	a *= b;            //a=a*b
	printf("%d\n", a); //600
	printf("%d\n", b); //20
	


	printf("%d\n", a==b);
	printf("%d\n", a!=b);
	printf("%d\n", a>b);
	printf("%d\n", a>=b);
	printf("%d\n", a<b);
	printf("%d\n", a<=b);

	//1.判断一个数是否为偶数,需要用到的运算符
	//   %
	int c = 11;
	printf("%d\n", c % 2 == 0);  // 1为偶数,0为奇数


	//2.判断一个数字不超过100
    //   <=
	int number = 100;
	printf("%d\n", number <= 100);

	//3.电商项目支付功能业务,需要判断银行卡余额是否足够
	//   <=
	int pay =  100;
	int money = 100;
	printf("%d\n", pay <= money );

	//4.电商项目购买业务,需要判断货物库存是否足够
	int buy = 10;
	int ware = 100;
	printf("%d\n", buy <= ware);

	//5.点餐项目筛选商品业务,需要不低于100元
	int goods = 500;  //商品的价格
	printf("%d\n", goods >= 100);









	return 0;
}









