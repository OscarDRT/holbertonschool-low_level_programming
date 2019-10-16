#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 */
char *argstostr(int ac, char **av)
{
	char *wo;
	int i, tam;

	if (ac == 0 || av == NULL)
		return (NULL);
	tam = ac + 1;
	wo = malloc(tam * sizeof(char));
		if (wo == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		**wo[i] = av[i];
	return (**wo);
}
