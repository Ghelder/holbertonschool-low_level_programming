#include "main.h"
/**
 * _atoi -> function
 * @s: character string
 * Return: num (Success)
 */

int _atoi(char *s)
{
	int i, sgn, num;

	sgn = 1;
	num = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == '-')
			sgn *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				num = (*(s + i) - '0') * sgn + num * 10;
				i++;
			}
			break;
		}
	}
	return (num);
}
