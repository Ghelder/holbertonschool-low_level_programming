#include "main.h"
#include <ctype.h>
/**
 * _islower -> function
 * @c: parameter int
 * checks if the value is in lower case through values of zero and one
 * Return: 1 o 0 the conditionals
 */

int _islower(int c)
{
	if (islower(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
