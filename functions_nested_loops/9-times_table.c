#include "main.h"
/**
 * times_table -> function
 * print the multiplication table from zero to nine.
 * Return: void (success)
*/

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{

			mult = i * j;

			_putchar(',');
			_putchar(' ');


			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
