#include "dog.h"
/**
 * init_dog - will init a dog struct using args
 * @d: dog struct
 * @name: dog name
 * @age: dog age (in dog years ?)
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
