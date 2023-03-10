#include "main.h"
/**
 * _strspn -> funtion
 * @s: character string one
 * @accept: character string two
 * Return: i (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
	if (*(accept + j) == '\0')
		break;
	}
	return (i);
}
