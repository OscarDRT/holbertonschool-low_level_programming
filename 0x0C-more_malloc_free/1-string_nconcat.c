#include "holberton.h"
#include <stdlib.h>

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

/**
 *
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
	 int i, j, t1, t2, tamt;
	 char *ptr;

	 if (*s1 == NULL)
	 {
		 s1 = "";
	 }
	 if (*s2 == NULL)
	 {
		 s2 = "";
	 }
	 t1 = _strlen(s1);
	 t2 = n;
	 tamt = t1 + t2;
	 ptr = malloc(tam * sizeof(char) + 1 );
	 if (ptr == NULL)
	 {
		 return (NULL);
	 }
	 for (i = 0, j = 0; s1[i]; i++, j++)
	 {
		 con
	 }
 }