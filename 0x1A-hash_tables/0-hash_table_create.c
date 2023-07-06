#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: hash table hash_table_t size
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table && table->array)
		return (table);
	return (NULL);
}

