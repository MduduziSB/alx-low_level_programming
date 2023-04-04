#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes list's head
 * @head: list's head
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *prev_head;

	if (!*head)
		return (0);
	prev_head = *head;
	*head = prev_head->next;
	data = prev_head->n;
	free(prev_head);
	return (data);
}

