#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %li byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long: %li byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %li byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
