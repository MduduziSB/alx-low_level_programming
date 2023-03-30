#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - computes number of elements in a linked list
 * @h: linked list head
 * Return: linked list's number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *c;

	if (!h)
		return (0);
	c = h;
	while (c)
	{
		c = c->next;
		n++;
	}
	return (n);
}

