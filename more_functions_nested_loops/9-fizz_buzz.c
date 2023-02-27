#include <stdio.h>
/**
 * main -> funtion
 * prints the numbers from 1 to 100
 * Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
