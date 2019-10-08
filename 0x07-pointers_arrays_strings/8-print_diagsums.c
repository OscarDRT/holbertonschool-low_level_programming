#include <holberton.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: parameter
 * @size: size array[size][size]
 */
void print_diagsums(int *a, int size)
{
	int fila, columna, sumad1, sumad2;

	sumad1 = 0;
	sumad2 = 0;
	for (fila = 0; fila < size; fila++)
	{
		sumad1 = sumad1 + a[fila][fila];
	}
	printf("%d", sumad1);
	for (fila = size - 1; fila >= 0; fila--)
	{
		for (columna = 0; columna < size; columna++)
		{
			sumad2 = sumad2 + a[fila][columna];
		}
	}
	printf("%d", sumad2);
}
