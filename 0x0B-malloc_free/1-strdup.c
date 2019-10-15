#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - contains a copy of the string given as a parameter
 *
 * @str: string send for parameter
 *
 * Return: NULL or copy
 */
char *_strdup(char *str)
{
	int i, tam = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[tam] != '\0')
	{
		tam++;
	}
	tam++;
	copy = malloc(tam * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < tam; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
