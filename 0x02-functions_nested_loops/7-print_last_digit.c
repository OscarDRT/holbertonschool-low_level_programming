#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: type int variable
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m >= 0)
	{
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = m * (-1);
		_putchar(m + '0');
		return (m);
	}
}
