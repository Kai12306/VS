#include <stdio.h>

int main()
{
	int a = 123;
	double f = 3.14159;

	printf("[%d]\n", a);
	printf("[%8d]\n", a);
	printf("[%-8d]\n", a);
	printf("[%08d]\n", a);
	printf("[%+d]\n", a);
	printf("[%-+8d]\n", a);
	printf("\n");
	printf("[%f]\n", f);
	printf("[%.2f]\n", f);
	printf("[%10.2f]\n", f);
	printf("[%-10.2f]\n", f);
	printf("[%010.2f]\n", f);
	printf("\n");
	printf("[%c]\n", 'A');
	printf("[%5c]\n", 'A');
	printf("[%-5c]\n", 'A');
	printf("\n");
	printf("[%s]\n", "abc");
	printf("[%6s]\n", "abc");
	printf("[%-6s]\n", "abc");
	printf("\n");
	printf("[%lld]\n", 9998000099LL);

	return 0;
}
