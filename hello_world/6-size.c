#include <stdio.h>
/*
 *
 *
 *
 */
int main(void)
	{
	char a;
	int b;
	long int c;
	long long d;
	float e;
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return(0);
}