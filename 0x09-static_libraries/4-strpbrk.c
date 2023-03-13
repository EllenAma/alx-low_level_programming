#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - function that searches string for first occurence
 * of any character in the string
 * @s: pointer to the character string
 * @accept: pointer to the character string
 * Return: character pointer
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
