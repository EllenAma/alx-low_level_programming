#include <stdio.h>
/**
 * main -entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char m = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n += 1;
	}
	while (m <= 'f')
	{
		putchar(m);
		m += 1;
	}
	putchar(10);
	return (0);
}
