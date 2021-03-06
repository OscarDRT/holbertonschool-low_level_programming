#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function for assignament dinamic memory
 *
 * @size: size for parameter
 * @c: character for parameter
 *
 * Return: 0 if size is 0 or ptr point null, other case ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
