#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - pointer to the function that copies of bytes of data
 * from memory location pointed to another memory location
 * @src: pointed memory location
 * @dest: pointed destination memory block
 * @n: number of bytes to be copied
 * Return: pointer to the dest memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

