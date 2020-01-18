#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: s the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, siz;
	const unsigned char *str;
	hash_node_t *new_node = NULL;

	if (key == NULL || value == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	siz = ht->size;
	str = (const unsigned char *)key;
	index = key_index(str, siz);
	if (ht->array[index] != NULL && (strcmp(key, ht->array[index]->key) == 0))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	printf("Direccion: %p\n", (void *)ht->array[index]);
	return (1);
}
