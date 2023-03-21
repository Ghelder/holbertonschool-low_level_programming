#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -> funtion
 * @s1: character string one
 * @s2: character string two
 * @n: parameter int
 * Return: pm (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i;
	char *pm;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;

	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	if (n >= s2_len)
		n = s2_len;

	pm = malloc(sizeof(char) * n + s1_len + 1);

	if (pm == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		pm[i] = s1[i];

	for (i = 0; i < n; i++)
		pm[i + s1_len] = s2[i];

	pm[i + s1_len] = '\0';
	return (pm);
}
