#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at indexth position
 * @head: list's head
 * @index: node position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int find = 1;
	listint_t *tmp, *rmNode;

	if (!*head)
		return (-1);
	tmp = *head;
	if (!index)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	rmNode = tmp->next;
	while (rmNode)
	{
		if (find == index)
		{
			tmp->next = rmNode->next;
			free(rmNode);
			return (1);
		}
		tmp = rmNode;
		rmNode = tmp->next;
		find++;
	}
	return (-1);
}

