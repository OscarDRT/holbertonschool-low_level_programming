#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @p: function parameter
 *
 * Return: Always ptr
 */
char *cap_string(char *p)
{
	int b;

	b = 0;
	while (p[b] != '\0')
	{
		if (p[0] >= 97 && p[0] <= 122)
		{
			p[b] = p[b] - 32;
		}
		if (p[b] == 32 || p[b] == 33 || p[b] == 34 || p[b] == 9 || p[b] == 10  ||
		p[b] == 40 || p[b] == 41 || p[b] == 44 || p[b] == 46 ||
		p[b] == 59 || p[b] == 63 || p[b] == 123 || p[b] == 125)
		{
			if (p[b + 1] >= 97 && p[b + 1] <= 122)
			{
				p[b + 1] = p[b + 1] - 32;
			}
		}
		b++;

	}
	return (p);
}
