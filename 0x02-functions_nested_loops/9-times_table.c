#include "holberton.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
  int lin, col, inc, div, mod;

  for (lin = 0; lin < 10; lin++)
    {
      for (col = 0; col < 10; col++)
	{
	  inc = lin * col;
	  div = inc / 10;
	  mod = inc % 10;
	  if (col == 0)
	    _putchar('0');
	  else if (inc < 10)
	    {
	      _putchar(' ');
	      _putchar(mod + '0');
	    }
	  else
	    {
	      _putchar(div + '0');
	      _putchar(mod + '0');
	    }
	  if (col < 9)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	  else
	    _putchar('\n');
	}
    }
}
