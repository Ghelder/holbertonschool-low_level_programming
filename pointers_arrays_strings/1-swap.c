#include "main.h"
/**
 * swap_int -> func swap parameter
 * @a: parameter a int
 * @b: parameter b int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
