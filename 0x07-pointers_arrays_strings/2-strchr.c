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
	int i;

	while ( s[i] != c)
	{
		i++;
		s++;
		if (s[i] == NULL)
		{
			return (NULL);
		}
	}
	return (s);
}
