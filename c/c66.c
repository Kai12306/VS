#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
二级指针与多级指针 (2026-10-11)

链条:  pp  --指向-->  p  --指向-->  a
       int**         int*            int

一句话: 每多一级指针, 定义时就多一个星号
        a 是 int   ->  指向它的 p  写 int*
        p 是 int*  ->  指向它的 pp 写 int**
*/

int main()
{
	//int a = 10;

	//// 一级指针: p 存的是 a 的地址
	//int* p = &a;

	//// 二级指针: pp 存的是 p 的地址 (注意是两个星号)
	//int** pp = &p;

	//printf("变量的值 \n");

	//// %-10s 表示: 打一个字符串, 占10格, 左对齐 (这样右边就对得齐了)
	//printf("%-10s = %d\n", "a", a);

	//printf("指针的值(内容)\n");

	//// p 的值 = 一个地址, 用 %p 打; 地址是8字节, 所以有一长串前导0
	//printf("%-10s = %p   <-- p 的值, 就是 a 的地址 &a\n", "p", (void*)p);
	//// 注意: 上面这行 p 的值 和 下面 a 的地址 是同一个数
	//printf("%-10s = %p   <-- a 的地址, 和上面 p 的值 一模一样\n", "&a", (void*)&a);

	//printf("%-10s = %p   <-- pp 的值, 就是 p 的地址 &p\n", "pp", (void*)pp);
	//printf("%-10s = %p   <-- p 的地址, 和上面 pp 的值 一模一样\n", "&p", (void*)&p);

	//printf("解引用的值(顺着指针走)\n");

	//// *p: 顺着 p 走一步, 到 a, 取出 a 的值
	//printf("%-10s = %d              <-- *p 就是 a 的值\n", "*p", *p);

	//// *pp: 顺着 pp 走一步, 到 p, 取出 p 的值 (是个地址)
	//printf("%-10s = %p   <-- *pp 走到 p, 取出 p 的值 = &a\n", "*pp", (void*)*pp);

	//// **pp: 顺着 pp 走两步, 到 a, 取出 a 的值
	//printf("%-10s = %d              <-- **pp 走两步到 a\n", "**pp", **pp);

	//// 关键对照: *pp 和 p 是不是同一个东西?
	//printf("\n[对照]  *pp 的值 = %p\n", (void*)*pp);
	//printf("[对照]  p   的值 = %p\n", (void*)p);
	//printf("        上面两个一样 -> 说明 *pp 就是 p 本身\n");

	//printf("\n通过二级指针改 a \n");
	//// **pp 就是 a, 所以写 **pp 等于写 a
	//**pp = 99;

	//printf("%-10s = %d\n", "a", a);
	//printf("%-10s = %d\n", "*p", *p);
	//printf("%-10s = %d\n", "**pp", **pp);

	//printf("\n[结论] 三个都变成 99 -> **pp 改的就是 a 本身\n");

	//定义变量
	int a = 10;
	int b = 20;

	//定义一级指针
	int* p = &a;

	//定义二级指针
	int** pp = &p;

	// 作用一 : 利用二级指针修改一级指针里面记录的内存地址
	*pp = &b;

	//作用二:利用二级指针获取到变量中记录的数据。
	
	
	
	
	//[对照实验] 把上面的 "*pp = &b;" 注释掉, 那么下面 printf("%p\n",p) 就打不出 &b 了,
	//           因为 p 没被改, 它还指着 a -> 那时 p 和 &a 一致

	//输出打印
	printf("%p\n",&a);
	printf("%p\n", &b);
	printf("%p\n", p);
	//[改这里] **pp 是个 int (顺着 pp 走两步取到的整数), 必须用 %d 打
	//        用 %p 会报 C4477: "%p"需要 void* 参数, 但给的是 int
	printf("%d\n", **pp);



	return 0;
}
