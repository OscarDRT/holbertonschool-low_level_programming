#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
