#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: parameter
 * @size: size a
 */
void print_diagsums(int *a, int size)
{
	int cont; sumad1, sumad2;

	sumad1 = 0;
	sumad2 = 0;
	for (cont = 0; cont < (size * size); cont = cont + size + 1)
	{
		sumad1 = a[cont];
	}
<<<<<<< HEAD
	for (cont = size - 1; cont < (size * size) - (size - 1); cont = cont + size - 1)
=======
	for (fila = size - 1; fila >= 0; fila--)
>>>>>>> 90180cfc03bddf6bc5ab0b775f28af39bf402fc6
	{
		sumad2 = a[cont];
	}
	printf("%d, %d\n", sumad1, sumad2);
}
