#include "main.h"
/**
 * *_strncat -> func
 * @dest: first chain
 * @src: second chain
 * @n: maximum bytes
 * Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int idest;
	int isrc;

	idest = 0;

	while (*(dest + idest))
	{
		idest++;
	}

	isrc = 0;
	while (*(src + isrc) && isrc < n)
	{
		*(dest + idest) = *(src + isrc);
		idest++;
		isrc++;
	}
	return (dest);
}
