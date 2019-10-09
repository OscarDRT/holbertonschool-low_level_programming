#include "holberton.h"

/**
 * _
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s);
	s++;
	if (*s)
	{
		_putchar(*s);
	}
}
