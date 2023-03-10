#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of.
 * Return: The natural square root of n, -1 if n does not have
 * a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - finds the sqaure of root of a number recursively.
 * @n: The number to find the square root of.
 * @i: iterator
 * Return: The square root of n, or -1 if no square root exists in the range.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return(-1);

	if (i * i == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}
