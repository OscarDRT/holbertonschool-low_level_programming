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
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
	printf("%d\n", mult);
	return (0);
	}
}
