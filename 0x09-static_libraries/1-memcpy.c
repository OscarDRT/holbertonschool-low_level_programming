#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: Function parameter
 * @src: Function parameter
 * @n: Function parameter
 *
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
