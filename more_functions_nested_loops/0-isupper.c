#include "main.h"
#include <ctype.h>
/**
 * _isupper -> function
 * @c: parameter int
 * verify the uppercase character
 * Return: c (Success)
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
