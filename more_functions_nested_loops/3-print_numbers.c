#include "main.h"
/**
 * print_numbers -> function
 * prints the numbers from zero to nine
 * Return: --
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
