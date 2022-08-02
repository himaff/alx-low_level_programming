#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initilaize the dog struct
 *
 * @name:string
 * @d: pointer
 * @age: age of dog
 * @owner: owner of dog
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
