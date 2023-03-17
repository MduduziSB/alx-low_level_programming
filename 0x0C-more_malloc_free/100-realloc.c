#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previously allocated memory pointer
 * @old_size: ptr size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL && new_size > 0)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (ptr == NULL && new_size == 0)
		return (NULL);
	if (old_size == new_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

