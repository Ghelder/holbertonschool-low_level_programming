#include "main.h"
/**
 * print_last_digit -> function
 * @x: parameter int
 * print the last digit of a number
 * Return: x (success)
 */

int print_last_digit(int x)
{
	x = (x % 10);

	if (x < 0)
	{
		x = (x * -1);
	}
	_putchar(x + '0');
	return (x);
}
