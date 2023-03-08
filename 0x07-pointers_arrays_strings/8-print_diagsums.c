#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of
 *a square matrix of integers
 *
 *@a: the pointer to the array representing the square matrix
 *@size: size of the matrix (number of rows or columns)
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
