#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *aux;

	if (ht != NULL)
	{
		for (i = 0; i <= ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				tmp = ht->array[i];
				while (tmp)
				{
					aux = tmp;
					tmp = tmp->next;
					free(aux->key);
					free(aux->value);
					free(aux);
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
