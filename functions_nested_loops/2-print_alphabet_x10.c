#include "main.h"
/**
 * print_alphabet_x10 -> function
 *
 * prints the alphabet 10 times
 *
 * Return: --
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
