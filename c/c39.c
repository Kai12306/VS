#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    // ===== 你的版本（基础版，3 位数硬拆）=====
    int e = 312;
    int ea = e % 10;
    int eb = e / 10 % 10;
    int ec = e / 10 / 10 % 10;
    printf("[你的版本] %d -> %d%d%d -> %d\n", e, ea, eb, ec, ea*100 + eb*10 + ec);

    // ===== 基础版换成 4 位数会怎样 =====
    int f = 1234;
    int fa = f % 10;
    int fb = f / 10 % 10;
    int fc = f / 10 / 10 % 10;
    printf("[基础版吃4位] %d -> %d%d%d (丢了一位!) -> %d\n", f, fa, fb, fc, fa*100 + fb*10 + fc);

    // ===== 循环版（任意位数通吃）=====
    int nums[4] = {312, 1234, 7, 10000};
    for (int i = 0; i < 4; i++)
    {
        int n = nums[i];
        int rev = 0;
        while (n != 0)
        {
            int d = n % 10;
            rev = rev * 10 + d;
            n = n / 10;
        }
        printf("[循环版] %d -> %d\n", nums[i], rev);
    }
    return 0;
}
