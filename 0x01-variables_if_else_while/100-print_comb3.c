#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int e;
	int f = 0;

	while (f < 10)
	{
		e = 0;

		while (e < 10)
		{
			if (f != e && f < e)
			{
				putchar('0' + f);
				putchar('0' + e);

				if (e + f != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			e++;
		}
		f++;
	}
	putchar(10);
	return (0);
}
