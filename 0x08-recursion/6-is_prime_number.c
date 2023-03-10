#include "main.h"
#include <math.h>
/**
 * is_prime_number - check if an integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	
		return (0);
	return (max_divisor(n, n - 1));
}

/**
 * max_divisor - calculates the number of prime repetitively
 * @n: The integer to check
 * @i: iterator
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int max_divisor(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (max_divisor(n, i - 1));
}
