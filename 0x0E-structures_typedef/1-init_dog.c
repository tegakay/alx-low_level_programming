#include "dog.h"

/**
 * init_dog - function
 * @d: the struct
 * @name: the name
 * @age:the age
 * @owner:owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
