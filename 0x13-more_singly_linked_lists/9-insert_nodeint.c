#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: list's head
 * @idx: position of node insertion
 * @n: data part of new node
 * Return: adress o the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 1;
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head)
	{
		tmp = *head;
		new->n = n;
		if (!idx)
		{
			new->next = tmp->next;
			*head = new;
			return (*head);
		}
		while (tmp)
		{
			if (node == idx)
			{
				new->next = tmp->next;
				tmp->next = new;
				return (*head);
			}
			tmp = tmp->next;
			node++;
		}
		return (NULL);
	}
	return (NULL);
}

