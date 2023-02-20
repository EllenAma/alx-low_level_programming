#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 0;

	while (m <= 9)
	{
		putchar(m + '0');
		m += 1;
	}
	putchar(10);
	return (0);
}
