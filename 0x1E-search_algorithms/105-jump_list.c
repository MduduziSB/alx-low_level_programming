#include "search_algos.h"

/**
 * jump_list - Search for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: Pointer to the first node where value is located, NULL otherwise.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step = (size_t)sqrt(size);
	listint_t *ptr, *prev;
	char *s1 = "Value checked at index";
	char *s2 = "Value found between indexes";

	if (!list)
		return (NULL);
	ptr = list;
	prev = NULL;
	printf("Value checked at index [%lu] = [%d]\n", ptr->index, ptr->n);
	while (ptr->n < value)
	{
		prev = ptr;
		for (i = 0; ptr->next && i < step; i++)
			ptr = ptr->next;
		printf("%s [%lu] = [%d]\n", s1, ptr->index, ptr->n);
		if (ptr->n >= value)
		{
			printf("%s [%lu] and [%lu]\n", s2, prev->index, ptr->index);
			break;
		}
	}
	while (prev->index < ptr->index)
	{
		printf("%s [%lu] = [%d]\n", s1, prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
