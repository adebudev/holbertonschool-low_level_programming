#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size - is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if(!size || size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if(!ht)
		return (NULL);

	ht->array = (hash_node_t**)calloc(size, sizeof(hash_node_t*));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;


	return (ht);
}
