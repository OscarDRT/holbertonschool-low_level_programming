#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: take in a string
 */
void puts2(char *str)
{
	int a;
	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
