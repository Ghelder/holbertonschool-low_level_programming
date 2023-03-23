#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog -> print a struct dog
 * @d: parameter pointer
 */

void print_dog(struct dog *d)
{
	if (!d->name)
		d->name = "(nill)";
	if (!d->owner)
		d->owner = "(nill)";
	if (!d)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
