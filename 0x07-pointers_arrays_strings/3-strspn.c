#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 *@s: string to evaluate
 *@accept: string containing the list of characters to match in s
 *Return: count of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i = 0;

	while (*s != '\0')
	{
		found = 0;
		 for(i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				count++;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		s++;
	}
	return (count);
}
