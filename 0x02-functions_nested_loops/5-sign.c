#include "holberton.h"

/**
 * print_sign - print the sing of a number
 *
 * @n: type int variable
 *
 * Return: 0 if number is 0
 * 1 if number is greater than 0
 * -1 if is less than 0
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
