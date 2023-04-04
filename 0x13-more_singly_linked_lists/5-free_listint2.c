#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint2 - frees a list and set head to NULL
 * @head: list's head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *prev_head;

	if (*head)
	{
		prev_head = *head;
		while (prev_head)
		{
			*head = prev_head->next;
			free(prev_head);
			prev_head = *head;
		}
		*head = NULL;
	}
}

