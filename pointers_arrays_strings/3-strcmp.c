#include "main.h"
/**
 * _strcmp -> function
 * @s1: character string one
 * @s2: character string two
 * Return: b (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; *(s1 + i) && b == 0; i++)
	{
		b = *(s1 + i) - *(s2 + i);
	}
	return (b);
}
