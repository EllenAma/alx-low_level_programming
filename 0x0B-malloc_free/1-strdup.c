#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 *@str: pointer to the string
 *Return: dup or NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
