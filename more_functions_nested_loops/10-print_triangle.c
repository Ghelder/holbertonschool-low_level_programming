#include "main.h"
/**
 * print_triangle -> function
 * @size: size of the triangle
 * Return: --
*/

void print_triangle(int size)
{
	int i, j, o;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (o = (j - i); o <= size; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
