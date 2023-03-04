#include "main.h"
/**
 * print_rev -> func
 * @s: prints the string backwards
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; )
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
