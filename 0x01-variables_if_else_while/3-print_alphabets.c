#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */


int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m += 1;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n += 1;
	}
	putchar (10);
	return (0);
}
