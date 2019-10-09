#include "holberton.h"

/**
 * _print_rev_recursion - print rev string
 *
 * @s: type char parameter
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
