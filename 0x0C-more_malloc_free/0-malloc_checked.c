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

	if (b == 0)
	{
		exit(98);
	}
	ptr = malloc(b);
	if (ptr == NULL || b == INT_MAX)
	{
		exit(98);
	}
	return (ptr);
}
