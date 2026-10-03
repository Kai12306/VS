#include <stdio.h>

int main()
{
    // 1. 字符用单引号包着，一个字符
    char ch = 'A';

    // 2. 看看它到底是什么
    printf("ch 本身 = %c\n", ch);      // %c 按"字符"打印
    printf("ch 的数值 = %d\n", ch);    // %d 按"整数"打印

    // 3. 直接拿字符当整数用
    printf("'A' + 1 = %c\n", 'A' + 1);

    // 4. 几个常用字符的数值
    printf("'A'=%d  'a'=%d  '0'=%d  '1'=%d\n", 'A', 'a', '0', '1');

    return 0;
}
