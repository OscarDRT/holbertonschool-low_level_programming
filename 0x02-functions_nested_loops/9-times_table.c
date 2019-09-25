#include "holberton.h"

/**
 *
 */
void times_table(void)
{
	int lin, col, inc, mod, div;

	inc = 0;
	for (lin = 0; lin <= 9; lin++)
	{
		_putchar('0');
		if (lin < 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (lin = 1; lin <= 9; lin++)
	{
		for (col = 0; col <= 9; col++)
		{
			inc = col * lin;
			mod = inc % 10;
			div = inc / 10;
			if(inc >= 10)
			{
				_putchar(div + '0');
				_putchar(mod + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (inc < 10)
			{
				_putchar(inc + '0');
				_putchar(',');
				_putchar(' ');
				_putchar('0');
			}
			else
			{
			}

		}
		_putchar('\n');
	}}
