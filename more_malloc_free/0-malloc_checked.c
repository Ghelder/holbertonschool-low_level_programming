#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -> function
 * @b: parameter int
 * Return: ptn (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptn;

	ptn = malloc(b);

	if (ptn == NULL)
	{
		exit(98);
	}
	return (ptn);
}
