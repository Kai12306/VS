#include <stdio.h>

int main()
{
	//1.定义char数据类型的变量
	
	//char 字符  取值范围 (ASCII)  windows 一个字节
	char c1 = 'a';
	printf("%c\n",c1);

	char c2 = '1';
	printf("%c\n", c2);

	char c3 = 'A';
	printf("%c\n", c3);

	char c4 = '.';
	printf("%c\n", c4);

	char c5= 'n';
	printf("%c\n", c5);   
	//(只能打一个英文)


	//2.利用sizeof测量占用字节

	printf("%zu\n", sizeof(char));    //为什么打的是char,却可以知道c1,但不知道c2的

	printf("%zu\n", sizeof(c1));


	//unsigned double a = 10;(只要知道怎么改即可)
	//删掉unsigned即可

	double a = 10;

	return 0;
}
