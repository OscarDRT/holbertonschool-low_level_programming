#include "holberton.h"

/**
 * _islower - read character
 *
 * @c: - type int variable
 *
 * Return: 1 if is lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
