#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: is the size of the array
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	if (size < 1)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
	hashtable->size = size;
	return (hashtable);
}
