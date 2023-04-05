#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: list's head
 * Return: reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (!*head)
		return (NULL);
	tmp1 = *head;
	tmp2 = tmp1->next;
	while (tmp2)
	{
		tmp1->next = tmp2->next;
		tmp2->next = *head;
		*head = tmp2;
		tmp2 = tmp1->next;
	}
	return (*head);
}

