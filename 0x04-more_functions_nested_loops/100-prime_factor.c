#include <stdio.h>

/**
 * main - Print largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	long n;

	x = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % x == 0)
		{
			n = (n / x);
		}
		else
		{
			x = x + 1;
		}
	}
	printf("%d", x);
	printf("\n");
	return (0);
}
