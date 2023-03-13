#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - function that searches for the first occurence of
 * the character
 * @s: pointer to the string to be searched
 * @c: the character to be located in the string
 * Return:0
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
