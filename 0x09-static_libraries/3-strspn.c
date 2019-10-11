#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: function parameter
 * @accept: function parameter
 *
 * Return: Always c
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c;

	c = 0;
	for (a = 0; s[a] > 32; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}
	}
	return (c);
}
