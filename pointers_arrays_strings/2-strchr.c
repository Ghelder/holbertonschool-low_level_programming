#include "main.h"
/**
 * *_strchr -> function
 * @s: character string
 * @c: character to search
 * Return: s (Success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
