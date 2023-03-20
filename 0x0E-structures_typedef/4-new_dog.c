#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *MyDog = malloc(sizeof(dog_t));

	if (MyDog == NULL)
		return (NULL);
	MyDog->name = name;
	MyDog->age = age;
	MyDog->owner = owner;
	return (MyDog);
}

