#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string send for parameter
 * @c: character for first ocurrence
 *
 * Return: Always s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
