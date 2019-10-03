#include "holberton.h"

/**
 * _strncpy - copy
 *
 * @dest: receive a string and copy
 * @src: send the string copy
 * @n: bytes from src whit x null´s
 *
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
