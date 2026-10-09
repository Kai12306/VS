#include<stdio.h>

int main()
{
	//int a = 0x10;

	//printf("%d",a);//16
	// 
	//1.定义short,int,long,long long四种数据类型的变量
	//格式:数据类型 变量名 =数据值;

	//short 短整型 windows 2个字节   (-32768~32767)  (原本是short int)

	// [注意] short 2 字节, 范围 -32768~32767, 存不下 20 万这种数
	short a = 10;
	printf("%d\n",a);

	//int 整数型 windows 4个字节   (-2147483648~2147483647)  (int不可以重复加,会报错)
	int b = 100;
	printf("%d\n", 100);

	//long 长整数 windows 4个字节  (-2147483648~2147483647)  (原本是long int)

    // Linux 32位  4个字节     64位  8个字节
	long c = 1000L;
	// [重要] long 在 Windows 是 4 字节, Linux 64 位是 8 字节 —— 跨平台时长度会变!
	// 需要"固定 8 字节"就用 long long
	printf("%ld\n",c);

	//long long(c99) 超长整型 windows 8个字节 (19位数)    (原本是long long int)

	long long d = 10000LL;
	// [补充] 后缀 LL 说明这是 long long 类型字面量; 不加也能自动识别, 加了更严谨
	printf("%lld\n", d);

	//2.用sizeof测量每一种数据类型占多少字节,数据类型或者变量名
	// sizeof(数据类型或者变量名)
	//short
	// [补充] sizeof 的结果类型是 size_t, 标准占位符是 %zu (不是 %d)
	printf("%zu\n",sizeof(short));
	printf("%zu\n", sizeof(a));
	//int
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(b));
	//long
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(c));
	//long long
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(d));


	//2.有符号整数,与无符号整数的定义情况
	//signed有符号整数  正数 负数
	//unsigned无符号整数  正数

	signed int e = 100;
	printf("%d\n",e);

	//定义一个变量表示序号
	// 
	//short:-32768~32767
	//unsigned short:0~65535       (无符号整数)
	unsigned short num1 = 65535;
	printf("%u\n", num1);


	unsigned int f = 999;//若强行把变量名定义为负数,此时会出现乱码  (且要注意%后面的字母)
	printf("%u\n",f);

	//例如:
	// [易错] 给无符号变量赋负数不会报错, 但会按补码解释成一个巨大的正数
	// 这条本身就在演示这个"陷阱", 属于故意写的
	unsigned int g = -10;
	printf("%u\n", g);

	//整数默认类型为int
	// [补充] 打印时占位符必须和实际类型匹配:
	//   short -> %d可(会被提升), long -> %ld, long long -> %lld, unsigned -> %u, size_t -> %zu

	return 0;
}