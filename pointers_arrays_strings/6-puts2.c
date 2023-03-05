#include "main.h"
/**
 * puts2 -> func
 * @str: prints the characters of a string
 */

void puts2(char *str)
{
	int i;

	for(i=0; *str; i++)
	{
		if(*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
