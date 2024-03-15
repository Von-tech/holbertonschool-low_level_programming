#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog variable
 * @name: the name of the dog
 * @age: The age of the dog
 * @owner: the owner of the dog
 * @d: pointer to the struct dog variable to initialize
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
