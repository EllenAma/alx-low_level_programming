#include  <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if ((m == 'e') || (m == 'q'))
		{m++;
		}
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
