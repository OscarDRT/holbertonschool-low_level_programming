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

	b = 0;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[b];
		b++;
	}
	for (a = a; a < b; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
