#include "holberton.h"

/**
 * rot13 - function that encodes a string into rot13
 *
 * @p: function parameter
 *
 * Return: Always p
 */
char *rot13(char *p)
{
	int a, b;
	char ma[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mi[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; ma[b] != '\0'; b++)
		{
			if (p[a] == ma[b])
			{
				p[a] = mi[b];
			}
		}
	}
	return (p);
}
