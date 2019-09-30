#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: parameter type int pointer
 * @b: parameter type int pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
