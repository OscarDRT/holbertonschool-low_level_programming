#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: function parameter
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL || b == INT_MAX)
	{
		exit(98);
	}
	return (ptr);
}
