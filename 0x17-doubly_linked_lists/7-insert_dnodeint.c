#include "lists.h"
/**
 * size_of_list - computes number of nodes
 * @h: linked list head
 * Return: number of nodes
 */
unsigned int size_of_list(dlistint_t *h)
{
	dlistint_t *ptr = h;
	unsigned int count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: linked list's head
 * @idx: insertion position
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int position = 0, count;

	new = malloc(sizeof(dlistint_t));
	count = size_of_list(ptr);
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 || idx > count)
	{
		new->prev = NULL;
		new->next = ptr;
		if (ptr)
			ptr->prev = new;
		*h = new;
		return (new);
	}
	if ((count == idx) && ptr != NULL)
	{
		while (ptr->next)
			ptr = ptr->next;
		new->next = ptr->next;
		ptr->next = new;
		new->prev = ptr;
		return (new);
	}
	while (ptr)
	{
		ptr = ptr->next;
		position++;
		if (position == idx)
		{
			new->next = ptr;
			new->prev = ptr->prev;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
	}
	return (NULL);
}

