#include "main.h"
/**
 * *_memcpy -> function
 * @dest: character string one
 * @src: character string two
 * @n: n bytes
 * Return: dest (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
