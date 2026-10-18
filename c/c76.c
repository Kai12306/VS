#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 把数字按 8 位二进制打印出来，方便看清每一位
   注意：这个工具函数本身也是用位运算写的 */
void print_bin(unsigned char x)
{
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (x >> i) & 1);   /* 右移 i 位后取最低位 */
	}
	printf("\n");
}

int main()
{
	unsigned char x = 0x00;          /* 0x00 = 0000 0000 */

	printf("初始:      "); print_bin(x);

	x |= (1 << 3);                   /* 或上 1<<3 : 把第 3 位置 1 */
	printf("置第3位:   "); print_bin(x);

	x |= (1 << 0);                   /* 把第 0 位也置 1 */
	printf("再置第0位: "); print_bin(x);

	x &= ~(1 << 3);                  /* 与上 ~(1<<3) : 把第 3 位清 0 */
	printf("清第3位:   "); print_bin(x);

	printf("第0位的值是: %d\n", (x >> 0) & 1);
	printf("第3位的值是: %d\n", (x >> 3) & 1);

	/* 江协科技点灯那集见到的 0xFE，展开就是下面这样 */
	printf("\n0xFE 展开是: "); print_bin(0xFE);

	return 0;
}
