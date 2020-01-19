#include "hash_tables.h"

/**
 * hash_table_print - Function that deletes a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
					printf(", ");
				tmp = ht->array[i];
				while (tmp != NULL)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					if (tmp->next != NULL)
						printf(", ");
					flag = 1;
					tmp = tmp->next;
				}
			}
		}
		printf("}\n");
	}
}
