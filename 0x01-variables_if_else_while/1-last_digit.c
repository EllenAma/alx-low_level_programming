#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	o = n % 10;

	if (o > 5)
	{
	printf("Last digit of %d is %d greater than 5\n", n, o);
	}
	else if (o == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, o);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	return (0);
}
