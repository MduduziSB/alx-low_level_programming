#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - uses index to locate the nth node
 * @head: list's head
 * @index: node position
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int find = 0;
	listint_t *tmp, *nthNode = NULL;

	if (!head)
		return (nthNode);
	tmp = head;
	while (tmp)
	{
		if (index == find)
		{
			nthNode = tmp;
			return (nthNode);
		}
		tmp = tmp->next;
		find++;
	}
	return (nthNode);
}

