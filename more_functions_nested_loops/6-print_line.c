#include "main.h"
/**
 * print_line -> function
 * @n: parameter  int
 * draw a straight line on the terminal
 * Return: --
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
