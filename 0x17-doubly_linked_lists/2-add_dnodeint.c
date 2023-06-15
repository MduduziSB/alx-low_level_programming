#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: linked dlistint_t list head
 * @n: new node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	ptr = *head;
	new->n = n;
	new->prev = NULL;
	if (!ptr)
		new->next = NULL;
	else
	{
		new->next = ptr;
		ptr->prev = new;
	}
	*head = new;

	return (new);
}

