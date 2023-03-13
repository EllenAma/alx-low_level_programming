#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the string where the concatenation results
 * should be stored
 * @src: pointer to the string that will be appended
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
