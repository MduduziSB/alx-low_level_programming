#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t list's head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t n = 0;

	if (!h)
		return (0);
	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		n++;
		tmp = tmp->next;
	}
	return (n);
}

