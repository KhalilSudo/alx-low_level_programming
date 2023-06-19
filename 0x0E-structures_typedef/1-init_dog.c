#include "dog.h"

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes the members of the dog structure.
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
