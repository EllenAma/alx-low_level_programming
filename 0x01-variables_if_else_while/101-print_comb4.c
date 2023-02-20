#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */

int main(void)
{
	int f;
	int g;
	int h = 0;

	while (h < 10)
	{
		g = 0;
		while (g < 10)
		{
			f = 0;
			while (f < 10)
			{
				if (f != g && g != h && h < g && g < f)
				{
					putchar('0' + h);
					putchar('0' + g);
					putchar('0' + f);

					if (f + g + h != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				f++;
			}
			g++;
		}
		h++;
	}
	putchar(10);
	return (0);
}

