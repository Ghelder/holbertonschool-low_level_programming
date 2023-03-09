#include "main.h"
/**
 * *_memset -> function
 * @s: character string
 * @b: different character string
 * @n: n bytes
 * Return: s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
