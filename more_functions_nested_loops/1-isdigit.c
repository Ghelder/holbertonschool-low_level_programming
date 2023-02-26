#include "main.h"
#include <ctype.h>
/**
 * _isdigit -> function
 * @c: parameter int
 * verify a digit from zero to nine
 * Return: c (Success)
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
