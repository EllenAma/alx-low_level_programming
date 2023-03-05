#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: s value
 */
char *leet(char *s)
{
	int i, j;
	char *c = "aAeEoOtlL";
	char *d = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
			}
		}
	}
	return (s);
}
