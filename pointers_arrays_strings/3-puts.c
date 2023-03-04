 #include "main.h"
/**
 * _puts -> func
 * @str: print a string, followed by a new line
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
