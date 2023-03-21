#include "main.h"
#include <stdlib.h>
/**
 * *array_range -> function
 * @min: parameter min
 * @max: parameter max
 * Return: arr (Success)
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; min <= max ; i++)
	{
		*(arr + i) = min;
		min++;
	}
	return (arr);
}
