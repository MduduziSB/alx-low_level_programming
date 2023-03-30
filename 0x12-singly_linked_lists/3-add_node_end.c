#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - computes string length
 * @str: string
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;
	return (len);
}
/**
 * add_node_end - adds a new node at the end of a list
 * @head: list's head
 * @str: string
 * Return: head of new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
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

