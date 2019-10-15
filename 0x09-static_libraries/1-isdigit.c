#include "holberton.h"

/**
 * _isdigit - Read if is a number
 *
 * @c: - Type int variable
 *
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
