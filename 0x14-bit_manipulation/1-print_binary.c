#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number base 10 for change to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
