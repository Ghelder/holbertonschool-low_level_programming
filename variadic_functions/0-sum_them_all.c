#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -> function the sum of all its parameters
 * @n: number of parameters received
 * Return: sum (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
