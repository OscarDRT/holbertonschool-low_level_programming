#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *  @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{


	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}

