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
	listint_t *prev_head = *head;

	if (!prev_head)
		exit(1);
	while (*head)
	{
		*head = prev_head->next;
		free(prev_head);
		prev_head = *head;
	}
}

