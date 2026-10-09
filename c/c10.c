//键盘录入scanf  (c中提供的函数)

//获取用户在键盘输入的数据,并赋值给变量

   
//scanf被认为是有安全问题的,所以必须使用
#include<stdio.h>

int main()
{

	//键盘输入的基本使用

	//1.定义一个变量用来接收数据

	long a;
	

	//2.键盘录入
	printf("请输入一个整数\n");
	scanf("%ld",&a);
	// [注意] scanf 里 long 必须是 %ld; 写 %d 会把 4 字节数据写进 4 字节, 值可能被截断
	// [易错] 千万别漏 &  ——  漏了 & 会直接写到非法地址, 程序崩

	//3.打印一下
	printf("变量a里的值:%ld\n", a);

	int b;

	printf("请输入一个整数\n");
	scanf("%d", &b);

	//3.打印一下
	printf("变量b里的值:%d\n", b);

	char s[100];
	//char s[100] 的意思是"准备一个能装 100 个字符的盒子"。这就是数组章节的内容
	

	printf("请输入一句话：\n");
	scanf("%s", s);
	printf("你输入的是：%s\n", s);

	int c= 0;
	int ret = 0;

	ret = scanf("%d", &c);
	// [补充] scanf 的返回值 = 成功读到的项数;
	//   输入 "abc" 会返回 0 (一个都没读到), 可用它判断输入是否合法

	printf("ret = %d, c = %d\n", ret, c);







	printf("sizeof(long) = %d 字节\n", (int)sizeof(long));
	// [注意] sizeof 返回 size_t, 这里强制转成 int 才能配 %d; 直接写 %zu 更规范
	printf("sizeof(int)  = %d 字节\n", (int)sizeof(int));


















	////scanf("%d\n",&变量名);    
	
	////记得加&
	////不知道要不要加\n
	////%d表示输入一个整数

	return 0;
}