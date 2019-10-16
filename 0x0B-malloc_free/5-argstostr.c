#include "holberton.h"
#include <stdlib.h>

/**
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, cont;
	char *ptr;

	j = 0;
	cont = 0;
	for (i = 0; i < ac; i++)
	{
		while (ac[i][j])
		{
			cont++;
			j++;
		}
		j = 0;
	}
	ptr = malloc(cont * sizeof(char) + 1);
	
}