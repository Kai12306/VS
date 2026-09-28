#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	char a[100];                     // 姓名 = char 数组，不是 int
    printf("请输入你的姓名:");       // 提示
	scanf("%s", a);                // %s 不要 &（数组名本身就是地址）
	printf("我的姓名:%s\n", a);    // 输出 %s，不加 &


	char b[100];
	printf("请输入你的年龄:");
	scanf("%s",b);
	printf("我的年龄:%s\n",b);

	char c[100];
	printf("请输入身高");
	scanf("%s",c);
	printf("我的身高:%s\n",c);


	// 姓名 = char 数组，不是 int
	// 提示
	// %s 不要 &（数组名本身就是地址）
	// 输出 %s，不加 &






	return 0;
}