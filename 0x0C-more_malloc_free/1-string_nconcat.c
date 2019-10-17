#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - count the number of characters
 *
 * @s: function parameter
 *
 * Return: Always cont
 */
unsigned int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *@n: number bytes that need of s2
 * Return: NULL or ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, t1;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	t1 = _strlen(s1);
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	ptr = malloc((t1 + n) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; s1[i]; i++, j++)
	{
		ptr[j] = s1[i];
	}
	for (i = 0; i < n; i++, j++)
	{
		ptr[j] = s2[i];
	}
	ptr[j++] = '\0';
	return (ptr);
}
