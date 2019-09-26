#include "holberton.h"

/**
 * print_square - print scuare size
 *
 *@size: argumet of the function
 */
void print_square(int size)
{
	int fil, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (fil = 0; fil < size; fil++)
		{
			for (col = 0; col < size; col++)
			{
				if (col < fil || fil < col || fil == col)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
