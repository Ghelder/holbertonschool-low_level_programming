#include "main.h"
/**
 * print_sign -> function
 * @n: parameter int
 * print sign of a number
 * Return: 1 o 0 o -1 the conditionals
 */

int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		n = -1;
		_putchar('-');
	}
	return (n);
}
