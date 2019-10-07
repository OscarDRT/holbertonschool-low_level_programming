#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: function parameter
 * @accept: function parameter
 *
 * Return: Always s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = s + a;
				return (s);
			}
		}
	}
	s = 0;
	return (s);
}
