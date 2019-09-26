#include "holberton.h"

/**
 * print_diagonal - Function for print \
 *
 *@n: Argumet of the function
 */
void print_diagonal(int n)
{
	int fil, col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (fil = 1; fil <= n; fil++)
		{
			for (col = 1; col <= n; col++)
			{
				if (fil > col)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
