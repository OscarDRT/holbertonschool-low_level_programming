#include "search_algos.h"

/**
 * print_array - print array
 * @array: array
 * @size: size
 * @i: beggining
 */
void print_array(int *array, int size, int i)
{
	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d", array[i]);
			if (i != (int) size - 1)
				printf(", ");
	i++;
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, rigth = size, middle = 0;

	if (!array)
		return (-1);
	left = 0;
	rigth = (int)size - 1;
	print_array(array, (int)size, 0);
	do {
		middle = (left + rigth) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
			print_array(array, rigth + 1, middle + 1);
		}
		else if (array[middle] > value)
		{
			rigth = middle - 1;
			print_array(array, (rigth + 1), 0);
		}
		else
			return (middle);
	} while (left <= rigth);
	return (-1);
}
