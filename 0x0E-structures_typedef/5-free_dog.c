#include "dog.h"

/**
 * free_dog - inshaAllah
 * @d: dog to "free"
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
