#include <stdio.h>
#include "main.h"
/**
 * main -> function
 * @argc: parameter int
 * @argv: parameter
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *(argv));
	}
	return (0);
}
