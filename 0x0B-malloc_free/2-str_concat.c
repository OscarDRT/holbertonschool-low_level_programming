#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - prototype
 *
 * @s1: function parameter
 * @s2: function parameter
 * Return: concat
 */
char *str_concat(char *s1, char *s2)
{
	int tam1, tam2, tam, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	tam1 = 0;
	while (s1[tam1] != '\0')
	{
		tam1++;
	}
	tam2 = 0;
	while (s2[tam2] != '\0')
	{
		tam2++;
	}
	tam = tam1 + tam2;
	concat = malloc(tam * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[j++] = s2[i];
	}
	concat[tam] = '\0';
	return (concat);
}
