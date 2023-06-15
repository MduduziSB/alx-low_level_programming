#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: linked-list dlistint_t head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	while (ptr)
	{
		n++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (n);
}

