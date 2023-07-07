#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	size_t k = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (k)
				printf(", ");
			ptr = ht->array[i];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr)
					printf(", ");
			}
			k = 1;
		}

	}
	printf("}\n");
}

