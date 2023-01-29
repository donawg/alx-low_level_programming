#include "dog.h"

/**
 * new_dog - makes a new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	char *name_dup, *owner_dup;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	name_dup = malloc(sizeof(char *));
	if (!name_dup)
	{
		free(dog);
		return (NULL);
	}
	owner_dup = malloc(sizeof(char *));
	if (!owner_dup)
	{
		free(name_dup);
		free(dog);
		return (NULL);
	}

	if (!name)
		name = "";
	if (!owner)
		owner = "";
	for (i = 0; name[i] != '\0'; i++)
		name_dup[i] = name[i];
	name_dup[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_dup[i] = owner[i];
	owner_dup[i] = '\0';

	dog->name = name_dup;
	dog->age = age;
	dog->owner = owner_dup;

	return (dog);
}
