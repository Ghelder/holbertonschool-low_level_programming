#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -> function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
