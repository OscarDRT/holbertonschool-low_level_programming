#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: number arguments of program
 * @av: array of pointers to strings
 * Return: NULL or *ptr
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, cont;
	char *ptr;

	j = 0;
	k = 0;
	cont = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			cont++;
			j++;
		}
		cont++;
		j = 0;
	}
	ptr = malloc(cont * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k + 1] = '\0';
	return (ptr);
}
