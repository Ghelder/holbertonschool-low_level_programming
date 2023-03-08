#include "main.h"
/**
 * *cap_string -> function
 * @str: character string
 * Return: str (Success)
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char c[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; *(str + i); i++)
	{
		if (i == 0 && *(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		for (j = 0; *(c + j) ; j++)
		{
			if (*(c + j) == *(str + i) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				*(str + i + 1) = *(str + i + 1) - 32;
			}
		}
	}
	return (str);
}
