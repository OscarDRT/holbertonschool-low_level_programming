#include "holberton.h"

/**
 *
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
