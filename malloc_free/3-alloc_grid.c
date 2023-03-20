#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -> function
 * @width: parameter width
 * @height: parameter height
 * Return: p2m (Success)
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p2m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p2m = malloc(sizeof(int *) * height);
	if (p2m == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		p2m[i] = malloc(sizeof(int) * width);
		if (p2m[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
				free(p2m[i]);
			free(p2m);
			return (NULL);
		}
		for (j = 0; j < width ; j++)
			p2m[i][j] = 0;
	}
	return (p2m);
}
