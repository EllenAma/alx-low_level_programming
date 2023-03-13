#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_memset - function that fills the first bytes of
 *memory block
 *@s: pointer to the memory location that should be modified
 *@b: value that will be used to fill the memory block
 *@n: specifier the number of bytes to be filled
 *Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
