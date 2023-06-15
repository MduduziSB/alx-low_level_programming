#include "lists.h"
/**
 * sum_dlistint - computes the sum of all the data of a dlistint_t linked list
 * @head: dlistint_t linked list head
 * Return: sum of all data (n) of dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

