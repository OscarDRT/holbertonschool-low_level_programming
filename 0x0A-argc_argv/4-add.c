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
	int i, suma = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			if (atoi(argv[i]))
			{
				suma += atoi(argv[i]);
			}
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
