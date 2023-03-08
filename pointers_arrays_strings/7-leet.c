#include "main.h"
/**
 * *leet -> function
 * @s: character string
 * Return: s (Success)
 */

char *leet(char *s)
{
	int i;
	int j;
	char lo_up[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(lo_up + j); j++)
		{
			if (*(s + i) == *(lo_up + j))
			{
				*(s + i) = *(num + j);
			}
		}
	}
	return (s);
}
