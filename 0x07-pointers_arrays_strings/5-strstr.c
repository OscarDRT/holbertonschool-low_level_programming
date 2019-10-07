#include "holberton.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: function parameter
 * @needle: function parameter
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int cont;

	cont = 0;
	while (*haystack != '\0')
	{
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			cont++;
		}
		if (needle == '\0')
		{
			return (haystack - cont);
		}
		haystack = haystack - cont + 1;
		needle = needle - cont;
	}
	
	return (0);
}
