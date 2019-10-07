#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	long int a, b, c, d, ttal;

	a = 1;
	b = 1;
	d = 0;
	c = 0;
	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			ttal = d + c;
			d = ttal;
		}
		printf("%ld\n", d);
		return (0);
	}
}
