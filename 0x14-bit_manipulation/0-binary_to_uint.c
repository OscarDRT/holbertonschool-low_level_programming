#include "holberton.h"

/**
 * _strlen - count the number of characters
 *
 * @s: function parameter
 *
 * Return: Always cont
 */
unsigned int _strlen(const char *s)
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
 * _pow - returns the value of x raised to the power of y
 *
 * @x: function parameter
 * @y: function parameter
 *
 * Return: pow
 */
unsigned int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow(x, y - 1));
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int str, num, num10 = 0;
	unsigned int pos, pow;

	if (b == NULL)
		return (0);
	str = _strlen(b);
	for (pos = (str - 1), pow = 0; pow < str; pos--, pow++)
	{
		if (b[pos] != '1' && b[pos] != '0')
			return (0);
		if (b[pos] == '1')
		{
			num = _pow(2, pow);
			num10 += num;
		}
	}
	return (num10);
}
