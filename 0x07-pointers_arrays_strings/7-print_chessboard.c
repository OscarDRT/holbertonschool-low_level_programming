#include "holberton.h"

/**
 * print_chessboard - print ajedrez
 *
 * @a: function parameter
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[b][c]);
		}
		printf("\n");
	}
}
