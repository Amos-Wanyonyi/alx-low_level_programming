#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	{
		if (new_dog == NULL)
			return (NULL);
	}

	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (NULL);
	}
	
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
