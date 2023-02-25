#include "main.h"
#include <ctype.h>
/**
 * _isalpha -> function
 * checks for an alphabetic character
 * @c: parameter int
 * Return: 1 o 0 the conditionals
 */


int _isalpha(int c)
{
	if (isalpha(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
