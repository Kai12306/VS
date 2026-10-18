#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ============================================================
   极光二轮预测卷 机试题 5 道（已改好，可直接编译运行）
   想单独测某一题：把 main 里其他几行注释掉即可
   ============================================================ */

/* ---------- 第 1 题：水仙花数（100~999）---------- */
void q1_narcissus(void)
{
	printf("---- 第1题：100~999 的水仙花数 ----\n");
	for (int i = 100; i <= 999; i++)
	{
		int ge  = i % 10;          /* 个位 */
		int shi = i / 10 % 10;     /* 十位：先除掉个位，再取末位 */
		int bai = i / 100;         /* 百位 */
		if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i)
			printf("%d\n", i);
	}
}

/* ---------- 第 2 题：两数相除 ---------- */
void q2_divide(void)
{
	int a, b;
	printf("---- 第2题：输入两个整数 a b ----\n");
	scanf("%d%d", &a, &b);
	if (b == 0) { printf("除数不能为 0\n"); return; }
	printf("%d\n", a / b);
}

/* ---------- 第 3 题：数组最大最小值（不用数组，边读边比）---------- */
void q3_maxmin(void)
{
	int n, x, max, min;
	printf("---- 第3题：输入 n，再输入 n 个整数 ----\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (i == 0) { max = x; min = x; }        /* 第一个数：先当擂主 */
		else
		{
			if (x > max) max = x;
			if (x < min) min = x;
		}
	}
	printf("%d %d\n", max, min);
}

/* ---------- 第 4 题：指针逆序 ---------- */
void q4_reverse(void)
{
	int n, a[100];
	printf("---- 第4题：输入 n，再输入 n 个整数 ----\n");
	scanf("%d", &n);
	if (n <= 0 || n > 100) { printf("n 超出 1~100\n"); return; }
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	int* e = a;                 /* 指向头 */
	int* f = a + n - 1;         /* 指向尾 */
	while (e < f)
	{
		int t = *e; *e = *f; *f = t;
		e++; f--;
	}

	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");
}

/* ---------- 第 5 题：回文数判断 ---------- */
void q5_palindrome(void)
{
	int n;
	printf("---- 第5题：输入一个整数 ----\n");
	scanf("%d", &n);
	int t = n;          /* 关键：先存一份原数，不然下面就被除没了 */
	int rev = 0;
	while (t > 0)
	{
		rev = rev * 10 + t % 10;
		t /= 10;
	}
	if (rev == n) printf("YES\n");
	else          printf("NO\n");
}

int main(void)
{
	q1_narcissus();
	q2_divide();
	q3_maxmin();
	q4_reverse();
	q5_palindrome();
	return 0;
}
