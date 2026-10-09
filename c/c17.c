#include<stdio.h>
int main()
{
	//隐式转换
	//1.小范围自动升为大范围,再进行运算
	//2.short和char在进行运算时,会先升为int,再运算
	//3.不同数据类型进行计算,赋值,会触发隐式转换
	//4.char < short < int < long < long long < float < double

	//强制转换
	//1.把取值范围大的,转换为取值范围小的,就需要强制转换
	//2.格式: 目标数据类型 变量名 =(目标数据类型) 被强转的数据
	//3.强制转换可能使数据发生错误
	//4.char < short < int < long < long long < float < double

	int i = 65536;
	short b = (int)i;
	// [易错] 这里强转成 int 没意义(i 本来就是 int), b 仍是 short
	//        65536 超出 short 范围, 实际存进去的值是 0 (截断后取低 16 位)

	//此时由于65536超出short范围,就会发生错误

	short s1 = 10;
	short s2 = 20;
	/*short result = s1 + s2;*/

	//可在前面改为int

	//若改变后面
	//short result = (short)s1 + s2;     //这种错误,此时只修改了s1,未修改s2.结果还是int
	//printf("%zu\n", sizeof((short)s1 + s2));


	/*short result = (short)(s1 + s2);  *///此时才正确
	/*printf("%zu\n", sizeof((short)(s1 + s2)));*/

	// [重要] s1 + s2 会自动提升为 int 运算, 结果再赋给 short
	//        此时会触发隐式转换(可能丢精度), VS 会警告 C4244
	//        想彻底消掉警告就写 short result = (short)(s1 + s2);
	short result = s1 + s2;
	printf("%d\n",result);

	//以后的强制转换最好还是手写,提高代码的阅读性


	return 0;
}


