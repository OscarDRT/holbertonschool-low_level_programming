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
	int value, i, amount = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{

		value = atoi(argv[1]);
		if (value <= 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				while (value >= coins[i])
				{
					value = value - coins[i];
					amount++;
				}
			}
			printf("%d\n", amount);
		}
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
