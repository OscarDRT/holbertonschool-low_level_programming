#include "holberton.h"

/**
 *
 */
void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
