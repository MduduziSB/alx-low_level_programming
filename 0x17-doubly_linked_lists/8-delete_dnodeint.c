#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: list head
 * @index: node position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int count, position = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	ptr = *head;
	if (index >= count && !(*head))
		return (-1);
	while (ptr->next)
	{
		if (position == index)
		{
			if (ptr->prev && ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			}
			if (ptr->next && !ptr->prev)
			{
				*head = ptr->next;
				(*head)->prev = ptr->prev;
			}
			if (!ptr->next && ptr->prev)
				ptr->prev->next = ptr->next;
			if (!ptr->next && !ptr->prev)
				*head = NULL;
			free(ptr);
			break;
		}
		ptr = ptr->next;
		position++;
	}
	return (1);
}

