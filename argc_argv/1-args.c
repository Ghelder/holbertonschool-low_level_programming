#include <stdio.h>
#include "main.h"
/**
 * main ->  function
 * @argc: parameter int
 * @argv: parameter char
 * Return: 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
