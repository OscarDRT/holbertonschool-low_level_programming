#include "holberton.h"

/**
 * _strlen - count the number of characters
 *
 * @s: function parameter
 *
 * Return: Always cont
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
