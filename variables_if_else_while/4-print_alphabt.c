#include <stdio.h>
/**
* main -> init
*
* Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	if (i && i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
