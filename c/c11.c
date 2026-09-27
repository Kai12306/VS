#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//需求1:键盘录入女友名字,并按以下格式打印出来
	//格式:我的亲亲女朋友的名字:xxx

	//字符串变量定义方式:
	       // 数据类型  变量名[大小] =字符串;
	       //char str [内存占用大小]="aaa";
	//内存大小占用的计算方式:
	       //英文:一个字母,字符,数字占用一个字节
	       //中文:vs中,默认占用两个字节
	       //结束标记:一个字节

	//1.定义变量
	/*char s1[6] = "aaa你";
	/*printf("%s\n",s1);
	printf("%zu\n", sizeof(s1));
	printf("%zu\n", sizeof("aaa你"));*/








	////1.定义变量记录女朋友的名字
	//char str [100];

	////2,键盘录入女朋友的名字
	//printf("请输入你女朋友的名字:\n");
	//scanf("%s", str);

	////3.输出打印
	//printf("我亲亲女朋友的名字:%s\n",str);






	//需求2:键盘录入自己的的年龄,并按以下格式打印出来
	//格式:我的年龄:xxx
	
	//1.定义变量:年龄
	char str[100];




	//2.键盘录入自己的年龄
	printf("请输入自己的年龄:\n");
	scanf("%s",&str);


	//3.输出打印
	printf("你的年龄:%s\n",str);


	//1.定义变量:年龄
	int age;


	//2.键盘录入自己的年龄
	printf("请输入自己的年龄:\n");
	scanf("%d", &age);

	//3.输出打印
	printf("你的年龄:%d岁", age);


	//注意:无scanf中/n
    //要与前缀符合,才能正常运行
	return 0;
}