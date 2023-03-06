#include "main.h"
#include <stdio.h>
/**
 * print_array -> function
 * @a: pointer int
 * @n: n elements of an integer matrix
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
