#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


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
	int i;
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
	return (0);
}
