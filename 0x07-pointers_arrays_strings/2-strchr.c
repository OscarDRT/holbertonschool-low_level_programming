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

	p = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (s + i);
}
