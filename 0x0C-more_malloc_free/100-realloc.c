#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: NULL or ptr or p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, tam;
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (old_size < new_size)
	{
		tam = old_size;
	}
	else
	{
		tam = new_size;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (ptr);
	}
	for (i = 0; i < tam; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
