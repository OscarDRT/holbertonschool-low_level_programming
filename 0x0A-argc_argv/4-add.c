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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0");
	}
	for (i = 0; i < argc; i++)
	{
		if (*argv[i] < 0)
		{
			printf("Error\n");
			return (1);
		}
		if (*argv[i] >= 0 && *argv[i] <= 47 || *argv[i] >= 58 && *argv[i] <= 127)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
