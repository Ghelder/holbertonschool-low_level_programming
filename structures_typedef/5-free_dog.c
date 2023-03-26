#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -> function free dogs
 * @d: pointer
 **/
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
