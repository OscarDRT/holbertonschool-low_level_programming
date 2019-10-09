#include "holberton.h"

/**
 * _strlen_recursion - return lenght string
 *
 * @s: char type parameter
 *
 * Return: length string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

