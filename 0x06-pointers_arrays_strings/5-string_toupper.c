#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @ptr: function paremeter
 *
 * Return: Always ptr
 */
char *string_toupper(char *ptr)
{
	int a, b;

	a = 0;
	while (ptr[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		if (ptr[b] >= 97 && ptr[b] <= 122)
		{
			ptr[b] = ptr[b] - 32;
		}
		else
		{
		}
	}
	return (ptr);
}
