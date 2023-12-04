#include "hash_tables.h"
/**
 * hash_table_create - creating a hash table
 * @size: size of the array
 * Return: new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewHash = malloc(sizeof(hash_table_t));
	unsigned long int x = 0;

	if (!NewHash)
	{
		return (NULL);
	}

	NewHash->size = size;
	NewHash->array = malloc(sizeof(hash_node_t *) * size);

	if (!NewHash->array)
	{
		free(NewHash->array);
		return (NULL);
	}

	for (; x < size; x++)
	{
		NewHash->array[x] = NULL;
	}
	return (NewHash);
}
