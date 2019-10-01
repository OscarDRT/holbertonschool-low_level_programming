#include "holberton.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: function parameter
 */
void rev_string(char *s)
{
	int a, b, tam, tmp;
	char *fin, *inicio;

	a = 0;
	tam = 0;
	tmp = 0;
	while (s[a] != '\0')
	{
		a++;
		tam = a;
	}
	fin = s;
	inicio = s;
	for (b = 0; b < tam - 1; b++)
	{
		fin++;
	}
	for (b = 0; b < tam / 2; b++)
	{
		tmp = *inicio;
		*inicio = *fin;
		*fin = tmp;
		inicio++;
		fin--;
	}
}
