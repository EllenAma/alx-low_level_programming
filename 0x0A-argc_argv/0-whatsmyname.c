#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: integer that contains the number of command line
 * arguments
 * @argv: array of string to the argument
 * Return: 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
