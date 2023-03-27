#include "function_pointers.h"
/**
 * int_index -> function searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to the function that compares
 * Return: -1 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}

	return (-1);
}
