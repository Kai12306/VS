#include<stdio.h>
// [补充] stdio.h = standard input output, 提供 printf/scanf 等输入输出函数

// main 是程序入口, 有且只能有一个
int main()
{
	printf("超级无敌帅!");
	// [优化] 结尾加 \n 换行, 输出更规范; 否则命令行的提示符会和输出挤在一行
	// [补充] 返回 0 表示程序正常结束; 这里的 0 要和 int main() 的 int 对应
	return 0;
} 