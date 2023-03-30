#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked-list head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *c;

	if (!h)
		return (0);
	c = h;
	while (c)
	{
		if (!c->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", c->len, c->str);
		c = c->next;
		n++;
	}
	return (n);
}

