#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -> function
 * @argc: parameter count
 * @argv: parameter vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		sum += atoi(*(argv + i));

		if (!atoi(*(argv + i)))
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
