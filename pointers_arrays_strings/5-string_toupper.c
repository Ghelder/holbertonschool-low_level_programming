#include "main.h"
/**
 * string_toupper -> function
 * @str: character string
 * Return: str (Success)
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
