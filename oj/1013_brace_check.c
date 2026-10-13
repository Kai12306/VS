#include<stdio.h>
int main()
{
	/* 版本1：省掉大括号 */
	for (int i = 1; i <= 3; i++)
		printf("A");
		printf("B");
	printf("\n");

	printf("----\n");

	/* 版本2：加了大括号 */
	for (int i = 1; i <= 3; i++) {
		printf("A");
		printf("B");
	}
	printf("\n");

	return 0;
}
