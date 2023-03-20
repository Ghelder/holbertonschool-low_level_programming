#include "main.h"
#include <stdlib.h>
/**
* _strlen -> func
* @s: returns the length of a string
* Return: (i) Success
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		;
	}
	return (i);
}
/**
* *_strncat -> func
* @dest: first chain
* @src: second chain
* @n: maximum bytes
* Return: dest (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);
	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	return (dest);
}
/**
 * *str_concat -> function
 * @s1: parameter char one
 * @s2: parameter char two
 * Return: pm (Success)
 */


char *str_concat(char *s1, char *s2)
{
	char *pm;
	int sz1;
	int sz2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	sz1 = _strlen(s1);
	sz2 = _strlen(s2);

	pm = malloc(sizeof(char) * ((sz1 + sz2) + 1));
	if (pm == NULL)
	{
		return (NULL);
	}
	else
	{
		_strncat(pm, s1, sz1);
		_strncat(pm, s2, sz2);
	}
	pm += '\0';
	return (pm);
}
