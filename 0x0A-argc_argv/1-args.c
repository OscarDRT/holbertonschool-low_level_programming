#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print name a program
 *
 * @argc: Number of arguments passed into it
 * @argv: Unused
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
