#include <stdio.h>
int main()
{
	int arr[] = { 10,20,30,40,50,60 };
	int *p = arr;

	printf("p-1 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p);
		p - 1;
	}
	printf("\n");

	p = arr;
	printf("p++ : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	return 0;
}
