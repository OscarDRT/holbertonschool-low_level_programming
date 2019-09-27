#include "holberton.h"

/**
 * print_triangle - print triangle
 *
 *@size: argument of the function
 */
void print_triangle(int size)
{
	int fil, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (fil = 1; fil <= size; fil++)
		{
			for (col = size; col >= 1; col--)
			{
				if (fil < col)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
				_putchar('\n');
		}
	}
}

