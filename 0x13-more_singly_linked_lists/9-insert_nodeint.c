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
	listint_t *tmp, *prev_head, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head)
	{
		prev_head = *head;
		if (!idx)
		{
			new->n = n;
			new->next = prev_head;
			*head = new;
			return (*head);
		}
		tmp = prev_head->next;
		while (tmp)
		{
			if (node == idx)
			{
				new->n = n;
				new->next = tmp;
				prev_head->next = new;
				return (*head);
			}
			prev_head = tmp;
			tmp = tmp->next;
			node++;
		}
		return (NULL);
	}
	return (NULL);
}

