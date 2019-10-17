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
	int i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min != max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i] = max;
	return (ptr);
}
