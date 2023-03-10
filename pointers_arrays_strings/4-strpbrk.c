#include "main.h"
/**
 * *_strpbrk -> function
 * @s: character string one
 * @accept: character string two
 * Return: (s + i) Success
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}

		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
