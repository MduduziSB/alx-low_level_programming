#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - adds elements of the list
 * @head: list's head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (!head)
		return (sum);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

