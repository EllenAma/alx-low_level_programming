#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - function that takes two input arguments
 * initial segment of the string
 * @s: pointer to the character string
 * @accept: pointer to the character string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
