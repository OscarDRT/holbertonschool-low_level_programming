#include "holberton.h"

/**
 * help - find a string palindrome
 * @s: parameter pointer
 * @x: parameter
 * @lon: parameter
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int help(char *s, int x, int lon)
{
	if (x < lon)
	{
		if (s[x] == s[lon])
			return (help(s, x + 1, lon - 1));
		else
			return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - lenght of a string
 * @s: parameter
 * Return: The length
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
 * is_palindrome - find if a string is palindrome
 * @s: a pointer to the first value of the string
 * Return: 1 if the string is a palindrome, 0 in otherwise
 */
int is_palindrome(char *s)
{
	int x;
	int lon;

	x = 0;
	lon = _strlen_recursion(s);
	return (help(s, x, lon - 1));
}
