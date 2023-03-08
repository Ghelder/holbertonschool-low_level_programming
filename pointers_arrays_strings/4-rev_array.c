#include "main.h"
/**
 * reverse_array -> functiom
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		n--;
	}
}
