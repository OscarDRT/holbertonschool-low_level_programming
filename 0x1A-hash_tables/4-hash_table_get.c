#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, siz;
	const unsigned char *str;
	hash_node_t *aux;

	if (ht == NULL)
		return (NULL);
	siz = ht->size;
	str = (const unsigned char *)key;
	index = key_index(str, siz);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
