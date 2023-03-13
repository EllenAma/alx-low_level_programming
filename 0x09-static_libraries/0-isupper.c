#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - determines whether input character is uppercase or not
 *@c:  uppercase or lowercase letter
 *Return: 1 if the input is an uppercase or 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
