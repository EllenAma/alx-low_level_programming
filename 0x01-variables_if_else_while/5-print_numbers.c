#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 0;

	while (m <= 9)
	{
		printf("%d", m);
		m += 1;
	}
	putchar(10);
	return (0);
}
