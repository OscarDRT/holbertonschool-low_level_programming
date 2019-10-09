#include "holberton.h"

/**
 * help - help square root
 *
 * @cont: save value
 * @y: save number n
 */
void help(int *cont, int y)
{
	if ((*cont) * (*cont) == y)
	{
		return;
	}
	if ((*cont) * (*cont) < y)
	{
		*cont = *cont + 1;
		help(cont, y);
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number for square root
 *
 * Return: Depending case
 */
int _sqrt_recursion(int n)
{
	int result = 2;
	int *cont = &result;

	help(cont, n);
	result = *cont;
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if ((*cont) * (*cont) != n)
	{
		return (-1);
	}
	return (result);
}

