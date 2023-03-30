#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * _strlen - computes string length
 * @str: string
 * Return: string length
 */
unsigned int _strlen(char *str)
{
	unsigned int  len = 0;

	while (str[len])
		len++;
	return (len);
}
/**
 * add_node - adds a new node at the beggining of list
 * @head: list's head
 * @str: string
 * Return: head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

