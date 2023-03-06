#include "main.h"
/**
 * puts2 -> func
 * @str: prints the characters of a string
 */

void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
