#include "holberton.h"

/**
 * _strlen_recursion - return lenght string
 *
 * @s: char type parameter
 *
 * Return: length string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 *
 */
void help(char *inicio, char *fin, int *re, int lon)
{
	if (*inicio != *fin)
	{
		*re = 0;
		return;
	}
	if (*inicio == *fin && *inicio && *fin)
	{
		inicio++;
		fin--;
		*re = 1;
		help(inicio, fin, re, lon);
	}
}

/**
 *
 */
int is_palindrome(char *s)
{
	int lon;
	int ret = 0;
	int *re = &ret;
	char *fin;
	char *inicio;

	lon = _strlen_recursion(s);
	inicio = s;
	fin = s;
	if(*s)
	{
		fin++;
	}
	help(inicio, fin, re, lon);
	if (!*s && !*fin)
	{
		return (1);
	}
	return (ret);
}
