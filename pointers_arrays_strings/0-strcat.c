#include "main.h"
/**
 * *_strcat -> func
 * @dest: chain one
 * @src: chain two
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int idest;
	int isrc;

	idest = 0;

	while (*(dest + idest))
	{
		idest++;
	}

	isrc = 0;
	while (*(src + isrc))
	{
		*(dest + idest) = *(src + isrc);
		idest++;
		isrc++;
	}
	return (dest);
}
