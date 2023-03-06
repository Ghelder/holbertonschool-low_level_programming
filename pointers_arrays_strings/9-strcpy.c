#include "main.h"
/**
 * _strcpy -> function
 * @dest: return value
 * @src: copies the string it points to
 * Return: pointer dest
 */

char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < src[i]; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
