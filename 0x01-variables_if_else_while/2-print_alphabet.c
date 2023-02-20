#include <stdio.h>
/**
 * main - entry pont
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		putchar (y);
		y += 1;
	}
	putchar(10);

	return (0);
}

