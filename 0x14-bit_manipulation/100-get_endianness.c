#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c == 0)
		return (0);
	return (1);
}
