#include "holberton.h"

/**
 * help - prime number
 *
 * @ptr: function parameter
 * @pt: function parameter
 * @x: function parameter
 */
void help(int *ptr, int *pt, int x)
{
	if (x % (*ptr) == 0)
	{
		*pt = 0;
		return;
	}
	if (x % (*ptr) != 0 && *ptr <= x / 2)
	{
		*ptr = *ptr + 1;
		*pt = 1;
		help(ptr, pt, x);

	}
}

/**
* is_prime_number - is prime?
*
* @n: function parameter
*
* Return: Alway ret
*/
int is_prime_number(int n)
{
	int ret = 0;
	int *pt = &ret;
	int mov = 2;
	int *ptr = &mov;

	help(ptr, pt, n);
	ret = *pt;
	if (n <= 1)
	{
		return (0);
	}
	return (ret);
}
