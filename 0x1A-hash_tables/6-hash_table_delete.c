#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: No return
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del, *ptr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		del = ht->array[i];
		while (del)
		{
			ptr = del->next;
			free(del->key);
			free(del->value);
			free(del);
			del = ptr;
		}
	}
	free(ht->array);
	free(ht);
}

