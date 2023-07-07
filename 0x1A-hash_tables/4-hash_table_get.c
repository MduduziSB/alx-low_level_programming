#include "hash_tables.h"
/**
 * hash_table_get - gives you the index of a key
 * @ht: hash_table
 * @key: key
 * Return: the value associated with the key, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

