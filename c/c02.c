#include<stdio.h>
#include<math.h>
// [补充] math.h 提供 sqrt/pow/fabs 等数学函数, 用到就必须包含


int main() {
	double x = 2.0;
	// [注意] sqrt 形参和返回值都是 double; 传 int 会隐式转 double
	double result = sqrt(x);
	printf("sqrt(2) = %f\n", result);
	// [优化] %f 默认 6 位小数; 想控制位数写 %.4f
	printf("2^10   =%f\n", pow(2.0, 10.0));
	// [注意] C 里没有 ^ 次方运算符, ^ 是位异或; 求幂只能用 pow 或循环
	printf("abs(-5.5) = % f\n", fabs(-5.5));
	// [注意] 小数绝对值用 fabs, int 用 abs —— 用错不会报错但结果可能不对
	// [易错] "% f" 中间的空格会被原样输出, 容易看错, 建议写 "%.2f"
	// [补充] C99 起 main 不写 return 也默认返回 0, 但显式写出更清晰
	return 0;
}
