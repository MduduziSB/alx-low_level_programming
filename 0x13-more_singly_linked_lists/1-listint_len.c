#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - computes the number of elements
 * @h: listint_t list's head
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t Nelem = 0;

	if (!h)
		return (0);
	tmp = h;
	while (tmp)
	{
		Nelem++;
		tmp = tmp->next;
	}
	return (Nelem);
}

