#include "main.h"
#include <stdlib.h>
/**
 * *create_array -> function
 * @size: matrix size
 * @c: char parameter
 * Return: pm (returns the array pointer)
 */

char *create_array(unsigned int size, char c)
{
	char *pm;
	unsigned int i;

	pm = malloc(sizeof(c) * size);
	if (size == 0 || pm == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(pm + i) = c;
	}
	return (pm);
}
