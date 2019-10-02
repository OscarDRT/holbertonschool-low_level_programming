#include "holberton.h"

/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest: function parameter
 * @src: function parameter
 *
 * Return: Alway dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
