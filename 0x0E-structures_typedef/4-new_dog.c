#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * strcp - copies string
 * @str1: string copyy
 * @str2: original string
 * Return: string
 */
char *strcp(char *str1, char *str2)
{
	int i = 0;

	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = str2[i];
	return (str1);
}
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
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
	MyDog->name = malloc((len(name) + 1) * sizeof(char));
	if (MyDog->name == NULL)
	{
		free(MyDog);
		return (NULL);
	}
	MyDog->owner = malloc((len(owner) + 1) * sizeof(char));
	if (MyDog->owner == NULL)
	{
		free(MyDog->name);
		free(MyDog);
	}
	strcp(MyDog->name, name);
	strcp(MyDog->owner, owner);
	MyDog->age = age;
	return (MyDog);
}

