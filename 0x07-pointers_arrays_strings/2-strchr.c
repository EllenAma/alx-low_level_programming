#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
