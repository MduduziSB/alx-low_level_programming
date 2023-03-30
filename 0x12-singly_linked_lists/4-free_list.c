#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list -  frees a list_t list
 * @head: list's head
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		head = head->next;
		if (tmp->str)
			free(tmp->str);
		free(tmp);
		tmp = head;
	}
}

