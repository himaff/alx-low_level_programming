#include <stdlib.h>
#include "dog.h"

int _strLen(char *str);
void fillMen(char *str, int strLen, char *dest);

/**
 * new_dog - create new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: pointer of newly created dog or Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	nameLen = _strLen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog->name ==NULL)
	{
		free(n_dog);
		return (NULL);
	}
	fillMen(name, nameLen, n_dog->name);

	ownerLen = _strLen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	fillMen(owner, ownerLen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);
}

/**
 *  _strLen - Get length
 *
 *  @str: string
 *
 *  Return: Length of string
 */
int _strLen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * fillMen - copy string
 *
 * @str: String literal
 * @strLen: length string
 * @dest: the allocated memory
 */
void fillMen(char *str, int strLen, char *dest)
{
	int i;
	for (i = 0; i < strLen; i++)
		dest[i] = str[i];
	dest[i] = '\0';
}
