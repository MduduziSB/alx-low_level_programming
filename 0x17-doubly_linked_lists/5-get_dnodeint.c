#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list
 * @head: dlistint_t linked list head
 * @index: node position
 * Return: returns the nth node, or NULL if it doesn't exits
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int idx = 0;

	while (ptr)
	{
		if (idx == index)
			return (ptr);
		ptr = ptr->next;
		idx++;
	}
	return (NULL);
}

