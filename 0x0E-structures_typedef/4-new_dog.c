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

	dog = malloc(sizeof(dog_t));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
