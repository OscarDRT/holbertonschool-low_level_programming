#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: receive a string
 * @src : send a string
 *
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{
	int a, i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
