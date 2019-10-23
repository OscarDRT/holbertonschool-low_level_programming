#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: send for parameter
 * @size: size of the array
 * @action: s a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
