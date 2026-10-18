#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	const char* str = "I LOVE YOU!";
	int len = (int)strlen(str);
	int n = 0;

	for (float y = 1.2f; y >= -1.05f; y -= 0.07f)
	{
		for (float x = -1.3f; x <= 1.3f; x += 0.035f)
		{
			float a = x * x + y * y - 1.0f;

			if (a * a * a - x * x * y * y * y <= 0.0f)
			{
				putchar(str[n]);
				n = (n + 1) % len;
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}

