#include<stdio.h>

int* method();

int main()
{

// 1.指针的作用一 细节
//
//   函数中变量的生命周期跟函数相关,函数结束了,变量也会消失
//   此时在其他函数中,就无法通过指针使用了
//
//   如果不想函数中的变量被回收,可以在变量前面加 static 关键字

	//调用method函数并使用该函数中的变量a

	int* p = method();

	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("托点时间\n");
	printf("\n");
	printf("%d\n",*p);  //此时不会被打印,因为函数消失了,函数当中所有的变量也没了;

	//偶发性情况,下方无其他代码,内存还没有回收
	//在变量前面加上关键字(static)

	return 0;
}

int* method()
{
	static int* a = 10;  //此时会一直保存到程序的结束
	return &a;
}





