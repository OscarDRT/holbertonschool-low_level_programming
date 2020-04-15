#include "search_algos.h"

/**
 * print_array - print array
 * @array: array
 * @left: start print array
 * @rigth: end of printing array
 */
void print_array(int *array, int left, int rigth)
{
	printf("Searching in array: ");
	while (left <= rigth)
	{
		printf("%d", array[left]);
			if (left != (int)rigth)
				printf(", ");
	left++;
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
	int l, r, m;

	l = 0;
	r = (int)size - 1;
	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
