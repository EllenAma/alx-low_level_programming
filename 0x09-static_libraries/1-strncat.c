#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - function that concatenates characters
 * from the string
 * @dest: pointer to the destination string where results
 * should be stored
 * @src: pointer to the string that will be appended
 * @n: integer value that specifies the maximum number of
 * characters to be appended
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
