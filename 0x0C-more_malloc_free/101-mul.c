#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count the number of characters
 *
 * @s: function parameter
 *
 * Return: Always cont
 */
int _strlen(char *s)
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
 * error - print Error
 */
void error()
{
	int i;
	char msn[] = "Error\n";

	for (i = 0; msn[i] != '\0'; i++)
	{
		_putchar(msn[i]);
	}
	exit(98);
}

/**
*
*/
int main(int argc, char *argv[])
{
	int i, tn1, tn2;
	char *ptr;

	if (argc != 3)
	{
		error();
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr)
		{
			if (*ptr < 47 || *ptr > 57)
			{
				error();
			}
			ptr++;
		}
	}
	tn1 = _strlen(argv[1]);
	tn2 = _strlen(argv[2]);
	printf("%d %d", tn1, tn2);
	return (0);
}
