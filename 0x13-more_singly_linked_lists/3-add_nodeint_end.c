#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: list's head
 * @n: data part of the new node
 * Return: adress of the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!tmp)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}

