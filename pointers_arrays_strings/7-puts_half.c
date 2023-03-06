#include "main.h"
/**
 * puts_half -> func
 * @str: prints half of a string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	i = i - i / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
