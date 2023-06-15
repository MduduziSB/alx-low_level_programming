#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: linked dlistint_t list head
 * @n: new node data
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	ptr = *head;
	if (!ptr)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		new->next = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}

	return (new);
}

