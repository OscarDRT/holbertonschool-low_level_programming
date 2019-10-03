#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array send for parameter
 * @n: size from array send for parameter
 */
void reverse_array(int *a, int n)
{
	int b, tmp;
	int *inicio, *fin;

	inicio = a;
	fin = a;
	for ( b = 0; b < n -1; b++)
	{
		fin++;
	}
	for (b = 0; b < n / 2; b++)
	{
		tmp = *inicio;
		*inicio = *fin;
		*fin = tmp;
		inicio++;
		fin--;
	}
}
