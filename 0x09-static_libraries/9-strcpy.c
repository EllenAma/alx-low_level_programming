#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strcpy - function that copies pointed string
 * @src: pointer to source string
 * @dest: pointer to destination string
 * Return: location of the first character in the destination
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
