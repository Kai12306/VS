//小数采用科学计数法,一般比整数的取值范围大

//一般分为float (4字节)  double (8字节)

//不同数据类型表示范围和内存大小都不一样,由编译器来决定,可用sizeof确定

//小数默认是double类型\

//小数不能和unsigned组合,unsigned只能和整数组合

#include<stdio.h>
int main()
{
	//1.定义float double long double的数据类型的变量
	// float单精度小数,小数点后六位  windows 4个字节  38位   (记住要打一个F)


	float a = 3.14F;
	printf("%.2f\n",a);         //.2 作用:改为小数点后两位       (改变.后数字即可)    (六以后的情况有问题)


	//double双精度小数,小数点后15位  windows 8个字节 308位
	double b = 1.78;
	printf("%.lf\n",b);      //.2 作用:改为小数点后两位       (改变.后数字即可)      

	//long double 高精度小数,小数点后18~19位  windows 8个字节  其他(12,16)
	long double c = 3.1415926L;
	printf("%f\n",c);       //不知道为什么,不用.2好像有一点问题,只能打成3.141593



	//2.利用sizeof测量每种数据类型占用多少字节
	printf("%zu\n",sizeof(float));  //变量名同样可以
	printf("%zu\n", sizeof(a));

	printf("%zu\n", sizeof(double));

	printf("%zu\n", sizeof(long double));

	//3.小数的数据类型无法跟unsigned进行组合

	/*unsigned double b = 1.78;
	printf("%.lf\n", b);*/



	return 0;
}
