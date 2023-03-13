#include "main.h"
/**
 * _is_prime -> function
 * @a: parameter int
 * @b: parameter int
 * Return: _is_prime
 */
int _is_prime(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (_is_prime(a, b + 1));
}

/**
 * is_prime_number -> function
 * @n: parameter int
 * Return: _is_prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}


