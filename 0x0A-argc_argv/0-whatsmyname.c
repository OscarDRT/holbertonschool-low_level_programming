#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print name a program
 *
 * @argc: unused for this program
 * @argv: pointer to name the program
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
