#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - function that searches string for the first occurence
 * of anothers string
 * @haystack: character to pointer string
 * @needle: pointer to character string
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
