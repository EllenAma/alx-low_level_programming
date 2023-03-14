#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of argumnets
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
