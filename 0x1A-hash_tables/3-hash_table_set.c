#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: new item key
 * @value: new item value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *ptr;

	if (key[0] == '\0' || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}

