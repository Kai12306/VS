#include <stdio.h>
int main()
{
	int scores[7] = { 1, 2, 3, 4, 5, 6, 7 };

	int *e = scores;
	int *f = scores + 6;

	while (e < f)
	{
		int ter = *e;
		*e = *f;
		*f = ter;

		e++;
		f--;
	}

	for (int i = 0; i <= 6; i++)
	{
		printf("%d ", scores[i]);
	}
	printf("\n");
	return 0;
}
