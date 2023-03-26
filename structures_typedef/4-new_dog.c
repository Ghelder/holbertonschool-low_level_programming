#include "dog.h"
#include <stdlib.h>

/**
* *_strdup -> function
* @str: receives a string of characters
* Return: pm (Success)
*/
char *_strdup(char *str)
{
	char *pm;
	unsigned int size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; *(str + size); size++)
	{
		;
	}

	pm = malloc(sizeof(char) * (size + 1));

	if (pm == NULL)
	{
		return (NULL);
	}

	for (size = 0; *(str + size); size++)
	{
		*(pm + size) = *(str + size);
	}
	*(pm + size) = '\0';
	return (pm);
}

/**
 * new_dog -> function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new_d (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = _strdup(name);
	if (!new_d->name)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = _strdup(owner);
	if (!new_d->owner)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	return (new_d);

}
