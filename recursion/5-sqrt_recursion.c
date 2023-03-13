#include "main.h"
/**
 * _sqrt -> function
 * @a: parameter int
 * @b: parameter int
 * Return: _sqrt
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion -> function
 * @n: parameter int
 * Return: _sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
