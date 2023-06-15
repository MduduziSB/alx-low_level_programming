#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: linked dlistint_t list head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}

