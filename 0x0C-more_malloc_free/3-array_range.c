#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: value min
 * @max: value max
 * Return: NULL or ptr
 */
int *array_range(int min, int max)
{
	int cont, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
		ptr = malloc(max - min + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
			cont = min;
			for (i = 0; i <= (max - min); i++)
			{
				ptr[i] = cont;
				cont++;
			}
	return (ptr);
}
