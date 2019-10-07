#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	long int a, b, c, ttal;

	a = 1;
	b = 2;
	c = 0;
	ttal = 2;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			ttal = ttal + c;
		}
	}
	printf("%ld\n", ttal);
	return (0);
}
