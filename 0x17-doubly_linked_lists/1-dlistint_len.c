#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list
 * @h: linked dlistint_t list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}

