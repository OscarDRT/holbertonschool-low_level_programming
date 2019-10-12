#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print name a program
 *
 * @argc: value whit number of parameter
 * @argv: pointer to array whit pointer to parameter
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
