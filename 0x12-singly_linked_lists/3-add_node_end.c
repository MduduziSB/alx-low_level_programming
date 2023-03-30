#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: list's head
 * @str: string
 * Return: head of new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	unsigned int lenstr = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (new->str[lenstr])
		lenstr++;
	new->len = lenstr;
	new->next = NULL;
	ptr = *head;
	if (!ptr)
		*head = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}

