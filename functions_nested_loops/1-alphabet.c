#include "main.h"
/**
 * print_alphabet -> function
 *
 * prints the alphabet in lowercase
 *
 * Return: --
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
