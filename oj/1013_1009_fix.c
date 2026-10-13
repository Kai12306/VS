#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);

	int n = 0, t = a;
	while (t > 0) { n++; t = t / 10; }
	printf("%d\n", n);

	int d[6];
	t = a;
	for (int i = 0; i < n; i++) {
		d[i] = t % 10;
		t = t / 10;
	}

	for (int i = n - 1; i >= 0; i--) {
		if (i < n - 1) printf(" ");
		printf("%d", d[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i++) {
		printf("%d", d[i]);
	}
	printf("\n");

	return 0;
}
