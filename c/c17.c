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

	//c语言本身的的优化,c的底层已经做了一个强制转换
	short result = s1 + s2;
	printf("%d\n",result);

	//以后的强制转换最好还是手写,提高代码的阅读性


	return 0;
}


