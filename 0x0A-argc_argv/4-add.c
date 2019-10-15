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
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr)
		{
			if (*ptr < 47 || *ptr > 57)
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		suma = suma + atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
