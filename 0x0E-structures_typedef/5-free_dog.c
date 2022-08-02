#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog memory
 * @dog: Dog
 */
void free_dog(dog_t *dog)
{
	if (dog == NULL)
		return;

	free(dog->owner);
	free(dog->name);
	free(dog);
}
