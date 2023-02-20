#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (Success)
 */

int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m -= 1;
	}
	putchar(10);
	return (0);
}
