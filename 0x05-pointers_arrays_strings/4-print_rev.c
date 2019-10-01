#include "holberton.h"

/**
 * print_rev - print character string upside down
 *
 * @s: function parameter
 */
void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
