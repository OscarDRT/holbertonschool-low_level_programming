#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 * @key: Is the key
 * @size: Is the size of the array of the hash table
 * Return: Index number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
