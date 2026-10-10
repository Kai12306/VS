#include<stdio.h>
int main()
{
	//没有类型的指针:

	//特殊类型:
	//  void *p    不表示任何类型

	//1.定义一个变量
	int a = 10;
	int b = 20;

	//2.定义两个指针
	int* p1 = &a;
	short* p2 = &b;

	//3.输出打印
	printf("%d\n",*p1);
	printf("%d\n",*p2);

	/*char* p3 = p1;*/

	/*
	不同类型的指针之间,是不能互相赋值的
	void 类型的指针打破上面的观
	void 没有任何类型，好处可以接受任意类型指针记录的内存地址
	*/

	/*void* p3 = p1;
	void* p4 = p2;*/

	//缺点: void 类型的指针,无法获取变量里的数据，也不能进行加减的运算。

	/*
	printf("%p\n", p3+1);
	会直接报错
	*/







	return 0;
}
 
//函数:用来交换两个变量记录的数据
//修改以下函数,更具有通用性
//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//		* p1 = *p2;
//		*p2 = temp;
//
//}



//函数:用来交换两个变量记录的数据
//修改以下函数,更具有通用性
void swap(int* p1, int* p2,int len)
{
	//把void类型的指针,转成char类型的指针
	char* pc1 = p1;
	char* pc2 = p2;

	//以字节为单位，一个字节一个字节的进行交换
	for (int i = 0;i < len;i++)
	{

	}

}
