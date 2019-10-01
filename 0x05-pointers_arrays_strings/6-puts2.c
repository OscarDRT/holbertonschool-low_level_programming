#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: take in a string
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
