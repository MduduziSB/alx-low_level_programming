#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -  frees dogs
 * @d: struct dog variable
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	free(d);
}

