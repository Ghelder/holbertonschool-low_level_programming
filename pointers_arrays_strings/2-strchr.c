#include "main.h"
#include <stddef.h>
/**
* *_strchr -> function
* @s: character string
* @c: character to search
* Return: s (Success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
