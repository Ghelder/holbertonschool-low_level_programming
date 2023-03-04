#include "main.h"
/**
 * _strlen -> func
 * @s: returns the length of a string
 * Return: (i) Success
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s; i++)
	{
		s++;
	}
	return (i);
}
