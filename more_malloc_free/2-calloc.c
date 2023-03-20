#include "main.h"
#include <stdlib.h>
/**
 * _calloc -> function
 * @nmemb: member of block
 * @size: size of memory
 * Return: pm (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pm;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pm= malloc(nmemb * size);

	if (pm == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*(pm + i) = 0;
	}

	return (pm);
}
