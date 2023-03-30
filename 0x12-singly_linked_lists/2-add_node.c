#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beggining of list
 * @head: list's head
 * @str: string
 * Return: head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t lenstr = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	while (new->str[lenstr])
		lenstr++;
	new->len = lenstr;
	new->next = *head;
	*head = new;
	return (*head);
}

