#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: array send for parameter
 * @b: constant byte
 * @n: n bytes of the memory area pointed to by s
 *
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n - 1; ++a)
	{
		s[a] = b;
	}
	return (s);
}
