#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number beggining
 * @m: number finish
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, count = 0;

	x = n ^ m;
	while (x)
	{
		count += x & 1;
		x = x >> 1;
	}
	return (count);
}
