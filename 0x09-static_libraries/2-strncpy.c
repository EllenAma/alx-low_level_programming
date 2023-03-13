#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - function which copies a specified number of characters
 * from one string to another
 * @dest: destination string where the characters wouid be stored
 * @src: the source string from which characters would be copied
 * @n: maximum number of characters to be copied
 * Return: pointer to detination where the copied characters would be
 * stored
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
