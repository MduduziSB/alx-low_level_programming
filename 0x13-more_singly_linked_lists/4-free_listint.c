#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: list's head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *prev_head;

	if (head)
	{
		prev_head = head;
		while (prev_head->next)
		{
			head = prev_head->next;
			free(prev_head);
			prev_head = head;
		}
		free(prev_head);
	}
}

