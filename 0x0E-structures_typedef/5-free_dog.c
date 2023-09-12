#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free a dog from mem
 * @d: dog's struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
