#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: function parameter
 */
void puts_half(char *str)
{
	int a, b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a == 2)
	{
		_putchar(str[a]);
	}
	else if (a % 2 != 0)
	{
		for (b = (a - 1) / 2; b < a; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		for (b = a / 2; b < a; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
