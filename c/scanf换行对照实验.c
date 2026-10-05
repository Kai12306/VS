// 对照实验：scanf("%d\n") 到底卡不卡
// 结论：从终端交互输入时会卡（光标停住，要再敲一个非空白字符）；从管道/文件输入时不会卡
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("A: 用带换行的 scanf 读第一个数\n");
	scanf("%d\n", &a);          // ← 问题就在这里
	printf("A 读到了 %d\n", a);
	printf("B: 再用普通的 scanf 读第二个数\n");
	scanf("%d", &b);
	printf("B 读到了 %d\n", b);
	return 0;
}
