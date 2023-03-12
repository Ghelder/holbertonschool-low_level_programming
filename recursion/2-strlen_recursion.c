#include "main.h"
/**
 * _strlen_recursion -> function
 * @s: character string
 * Return: 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*(s++))
	{
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
