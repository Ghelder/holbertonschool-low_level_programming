#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -> function
 * @str: receives a string of characters
 * Return: pm (Success)
 */

char *_strdup(char *str)
{
	char *pm;
	char *ptr;
	unsigned int size;

	for (size = 0; *(str + size); size++)
	{
		;
	}

	pm = malloc(sizeof(char) * (size + 1));

	if (pm == NULL || str == NULL)
	{
		return (NULL);
	}

	ptr = pm;

	for (; *str;)
	{
		*(ptr++) = *(str++);
	}
	*(ptr) = '\0';
	return (pm);
}
