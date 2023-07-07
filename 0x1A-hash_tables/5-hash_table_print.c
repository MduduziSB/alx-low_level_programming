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

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (k)
				printf(", ");
			for (ptr = ht->array[i]; ptr; ptr = ptr->next)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				if (ptr->next)
					printf(", ");
			}
			k = 1;
		}

	}
	printf("}\n");
}

