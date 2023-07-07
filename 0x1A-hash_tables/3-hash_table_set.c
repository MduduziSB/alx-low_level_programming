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
	unsigned long int index_ascii;
	hash_node_t *new;

	if (!key[0] || !ht || !value || !key)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = malloc(sizeof(key) + 1);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}

	index_ascii = hash_djb2((unsigned char *)key);
	if (ht->array[index_ascii] == NULL)
	{
		new->next = NULL;
		ht->array[index_ascii] = new;
	}
	else
		new->next = ht->array[index_ascii];
	return (1);
}

