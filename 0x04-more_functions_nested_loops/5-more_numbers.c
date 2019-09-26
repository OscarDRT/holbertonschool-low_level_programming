#include "holberton.h"

/**
 * help - print only modulo of a number
 *
 * @mod: argument for help
 */
void help(int mod)
{
	_putchar(mod + '0');
}
/**
 * more_numbers - print 10 times the number, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int num1, num2, mod, div;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			div = num2 / 10;
			mod = num2 % 10;
			if (num2 >= 10)
			{
				_putchar(div + '0');
				help(mod);
			}
			else
			{
				help(mod);
			}
		}
		_putchar('\n');
	}
}
