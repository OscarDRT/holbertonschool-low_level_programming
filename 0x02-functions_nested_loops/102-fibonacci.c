#include <stdio.h>
/**
 * main - fibomacci
 * @void: no argument
 * Return: Always 0
 **/
int main(void)
{
	long int i, a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
