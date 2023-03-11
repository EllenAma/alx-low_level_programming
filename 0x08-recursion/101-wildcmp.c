#include "main.h"
/**
 * wildcmp - function that compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 1 if the string is identical or otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		return ((*s1 == '\0') ? 0 : (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

