#include "main.h"
/**
 * rev_string -> func
 * @s: reverses the chain
 */

void rev_string(char *s)
{
	int i = 0;
	int len;
	int tmp;

	while (s[i])
	{
		i++;
	}

	len = i;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
