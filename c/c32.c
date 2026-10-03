#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 【实验目的】亲眼看到 "\0" 的作用
	// 两个数组,内容都是 Kai,唯一区别是:一个带了 \0,一个没带
	// 取消注释哪一组,就跑哪一组

	
	// 第 1 组:带 \0 (正确写法)
	
	//char name1[] = "Kai";
	//printf("带\\0的: [%s]\n", name1);
	//printf("它占几个位置: %d\n", (int)sizeof(name1));   // 结果是 4

	
	// 第 2 组:不带 \0 (错误写法,故意测的)

	// 这里手动一个格一个格填,故意不填最后的 \0
	char name2[3];
	name2[0] = 'K';
	name2[1] = 'a';
	name2[2] = 'i';
	// 注意: 故意没写 name2[3] = '\0';  ← 这就是要看的
	printf("不带\\0的: [%s]\n", name2);

	
	// 第 3 组:对照组 —— 手动补上 \0
	
	// 把上面第 2 组注掉,解开这组,就能看到"补了 \0 就正常"
	char name3[4];
	name3[0] = 'K';
	name3[1] = 'a';
	name3[2] = 'i';
	name3[3] = '\0';
	printf("补了\\0的: [%s]\n", name3);

	return 0;
}
