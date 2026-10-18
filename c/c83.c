#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ============================================================
   函数声明：放在 main 前面，末尾加分号
   ============================================================ */
void show_arr_size(int arr[]);

/* ---------- 1. 读 n 个数，再原样打印出来 ---------- */
void q1_read(void)
{
	int n;
	int arr[100];
	printf("第1题 输入 n 和 n 个数：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("一共 %d 个数：", n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

/* ---------- 2. 拆出每一位（从低位到高位）---------- */
void q2_split(void)
{
	int n;
	printf("第2题 输入一个整数：\n");
	scanf("%d", &n);

	int t = n;
	printf("每一位：");
	while (t > 0)
	{
		int d = t % 10;
		printf("%d ", d);
		t /= 10;
	}
	printf("\n\n");
}

/* ---------- 3. 反转数字 ---------- */
void q3_revnum(void)
{
	int n;
	printf("第3题 输入一个整数：\n");
	scanf("%d", &n);

	int t = n;
	int rev = 0;
	while (t > 0)
	{
		rev = rev * 10 + t % 10;
		t /= 10;
	}
	printf("反转后：%d\n\n", rev);
}

/* ---------- 4. 最大最小值 ---------- */
void q4_maxmin(void)
{
	int n;
	int arr[100];
	printf("第4题 输入 n 和 n 个数：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("最大 %d，最小 %d\n\n", max, min);
}

/* ---------- 5. 指针逆序 ---------- */
void q5_revarr(void)
{
	int n;
	int arr[100];
	printf("第5题 输入 n 和 n 个数：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int* e = arr;
	int* f = arr + n - 1;
	while (e < f)
	{
		int t = *e; *e = *f; *f = t;
		e++; f--;
	}

	printf("逆序后：");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

/* ---------- 6. sizeof 在 main 里和函数里不一样 ---------- */
void show_arr_size(int arr[])
{
	printf("  函数里 sizeof(arr) = %zu 字节（已经变成指针了）\n", sizeof(arr));
}

void q6_sizeof(void)
{
	int arr[8];
	printf("第6题 sizeof 对比\n");
	printf("  main 里 sizeof(arr) = %zu 字节\n", sizeof(arr));
	printf("  main 里元素个数 = %zu\n", sizeof(arr) / sizeof(arr[0]));
	show_arr_size(arr);
	printf("\n");
}

int main(void)
{
	q1_read();
	q2_split();
	q3_revnum();
	q4_maxmin();
	q5_revarr();
	q6_sizeof();
	return 0;
}
