#include "hash_tables.h"
/**
 * key_index - computes the index of a key
 * @key: key
 * @size: hash table size
 * Return: the index at which the key/value pair should be store
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int idx;

	idx = hash_djb2(key);

	return  (idx % size);
}

